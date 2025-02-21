#include "bst.cpp"
//---------------------------MERGE TWO BST---------------------------
vector<int> mergearray(vector<int> &bst1, vector<int> &bst2)
{
  // vector<int> ans(bst1.size() + bst2.size());
  vector<int> ans;
  int i = 0, j = 0;
  while (i < bst1.size() && j < bst2.size())
  {
    if (bst1[i] <= bst2[j])
    {
      ans.push_back(bst1[i]);
      i++;
    }
    else if (bst1[i] > bst2[j])
    {
      ans.push_back(bst2[j]);
      j++;
    }
  }
  while (i < bst1.size())
  {
    ans.push_back(bst1[i++]);
  }
  while (j < bst2.size())
  {
    ans.push_back(bst2[j++]);
  }
  return ans;
}
Node *mergebst(Node *root1, Node *root2)
{
  // inorder from bst:- sorted array
  vector<int> bst1, bst2;
  inorder(root1, bst1);
  inorder(root2, bst2);
  // merge two sorted aarary inorder of final
  vector<int> ans = mergearray(bst1, bst2);
  int s = 0;
  int e = ans.size();
  // uinborder to bst
  return Inordertobst(s, e, ans);
}

//-----------------------O(h1+h2)complexity--------------------
//-----------------------CONVERTED INTO SORTED DOUBLY LINKED LIST-----------------
void convertin_dll(Node *root, Node *&head)
{
  if (root == nullptr)
    return;
  convertin_dll(root->right, head);
  root->right = head;
  if (head != nullptr)
    head->left = root;
  head = root;
  convertin_dll(root->left, head);
}
//---------merge two sorted linekd list----------------
Node *mergetwoll(Node *root1, Node *root2)
{
  Node *head = nullptr;
  Node *tail = nullptr;

  while (root1 != nullptr && root2 != nullptr)
  {
    if (root1->data < root2->data)
    {
      if (head == nullptr)
      {
        head = root1;
        tail = root1;
        root1 = root1->right;
      }
      else
      {
        tail->right = root1;
        root1->left = tail;
        tail = root1;
        root1 = root1->right;
      }
    }
    else
    {
      if (head == nullptr)
      {
        head = root2;
        tail = root2;
        root2 = root2->right;
      }
      else
      {
        tail->right = root2;
        root2->left = tail;
        tail = root2;
        root2 = root2->right;
      }
    }
  }
  while (root1 != nullptr)
  {
    tail->right = root1;
    root1->left = tail;
    tail = root1;
    root1 = root1->right;
  }
  while (root2 != nullptr)
  {
    tail->right = root2;
    root2->left = tail;
    tail = root2;
    root2 = root2->right;
  }
}
//---------------count no of nodes in linkedlist----------------
int count(Node *head)
{
  int cnt = 0;
  Node *temp = head;
  while (temp != nullptr)
  {
    cnt++;
    temp = temp->right;
  }
  return cnt;
}
//------------------------SortedLL to BST------------------
Node *sortedll_bst(Node *head, int n)
{
  if (n <= 0 || head == nullptr)
  {
    return nullptr;
  }
  Node *left = sortedll_bst(head, n / 2);
  Node *root = head;
  root->left = left;
  head = head->right;

  root->right = sortedll_bst(head, n - n / 2 - 1);
  return root;
}

Node *merge2bst(Node *root1, Node *root2)
{
  // Convert BST intop sorted DLL in-place
  Node *head1 = nullptr;
  convertin_dll(root1, head1);
  head1->left = nullptr;

  Node *head2 = nullptr;
  convertin_dll(root2, head2);
  head2->left = nullptr;

  // merge sorted linked list
  Node *head = mergetwoll(head1, head2);

  // conver ll into bst
  return sortedll_bst(head, count(head));
}

//------------------------------------------------LARGEST BST IN TREEE------------------------------
// four thing requires to fin largest bst first maximum value , minimum value, boolean var whihc will tell bst or not like left subtree is bst or not and last is the size of bst
class info
{
public:
  int maxsize; // max node value  of tree
  int minsize; // minimum node value of tree
  bool isbst;  // bst or not
  int size;    // size of bst
};
info solve(Node *root, int &maxsize)
{
  if (root == nullptr) // if nullptr then size 0 and min value for max and amx value fopr min and bst si true  ... for leaf node
  {
    return {INT_MIN, INT_MAX, true, 0};
  }
  info left = solve(root->left, maxsize);
  info right = solve(root->right, maxsize);

  info currnode;                                     // make a class object
  currnode.size = left.size + right.size + 1;        // size if left and right size +1
  currnode.maxsize = max(root->data, right.maxsize); // for maximum node value of tree
  currnode.minsize = min(root->data, left.minsize);  // for minimum value of tree

  // left subtree and right subtree both should be bst or bst property taht is root->data should be less than min value of right subtree and more than with the max value of left subtree if all rpoperties follows then tree is bst otherwise false
  if (left.isbst && right.isbst && (root->data > left.maxsize) && (root->data < right.minsize))
  {
    currnode.isbst = true;
  }
  else
  {
    currnode.isbst = false;
  }

  // if true tehn update amximum sum and return
  if (currnode.isbst)
  {
    maxsize = max(maxsize, currnode.size);
  }
  return currnode;
}

int LargestBst(Node *root)
{
  int maxsize = 0; // maxsize of bst
  info temp = solve(root, maxsize);
  return maxsize;
}

int main()
{
  //----------------------------Merge bst using vector/array--------------------
  cout << endl
       << endl
       << "merge two bst:- ";
  Node *root1 = nullptr;
  takeinput(root1);
  levelordertraversal(root1);

  Node *root2 = nullptr;
  takeinput(root2);
  levelordertraversal(root2);
  cout << endl;

  Node *mergeans = mergebst(root1, root2);
  levelordertraversal(mergeans);

  //----------------------------Merge bst using Linked List--------------------
  // cout << "merging using linekd list:- ";
  // Node *mergellbst = merge2bst(root1, root2);
  // levelordertraversal(mergellbst);
  return 0;
}