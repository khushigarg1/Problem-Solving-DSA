#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};
// enter data value-> create new node pointer -> we will take left and right value and will call loop for that again,
node *createTree(node *root)
{
  int data;
  cin >> data;
  root = new node(data);

  if (data == -1)
  {
    return nullptr;
  }
  cout << "Left of" << data;
  root->left = createTree(root->left);
  cout << "right of" << data;
  root->right = createTree(root->right);
  return root;
}

void levelOrderTraversal(node *root)
{
  if (!root)
  {
    return;
  }
  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    node *temp = q.front();
    q.pop();
    if (temp == NULL)
    {
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->data << " ";
      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}

void vertical(node *root)
{
  map<int, vector<int>> mp;
  queue<pair<int, node *>> q;
  q.push(make_pair(0, root));
  while (!q.empty())
  {
    pair<int, node *> temp = q.front();
    q.pop();

    int hd = temp.first;
    node *frontnode = temp.second;
    mp[hd].push_back(frontnode->data);
    if (frontnode->left)
      q.push(make_pair(hd - 1, frontnode->left));
    if (frontnode->right)
      q.push(make_pair(hd + 1, frontnode->right));
  }
  vector<int> ans;
  for (auto it : mp)
  {
    for (auto j : it.second)
    {
      ans.push_back(j);
    }
  }
  for (auto it : ans)
  {
    cout << it << " ";
  }
}

int main()
{
  node *root = NULL;
  root = createTree(root);
  levelOrderTraversal(root);
  vertical(root);
  return 0;
}