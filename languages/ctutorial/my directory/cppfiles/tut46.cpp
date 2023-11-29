/*-----------------constructors in derived class------------------*/
/*
We can use constructors in derived class in c++.
If base class construcor does not have any argumnets ,there is no need of any constructor in derived class.
But if there is are one or more arguments in the base classs cnstructot, drived cLass need t pass arguments to the base class constructor.
If both base and drived classes have constructors , base class constructor is executed first.

CONSTRUCTORS IN MULTIPLE INHERITANCE
In multilple inheritance,base classses are constructed in the order in which they appear in the class declaration.
in multilevel inheritance , the constructors are executed in the order of inheritance.

SPECIAL SYNTAX
Derived-constructor(arg1,arg2,arg3......): base1-constructor (arg1,arg2),base2-constructor (arg3,arg4)
{
    
}base1-constructor(arg2,arg2)

SPECIAL CASE OF VIRTUAL BASE  CLASS
the constructors for virtual base classes are invoked before an non virtual base class.
if there are multiple virtual base classes,they are invoked in the order declared.
any non virtual base class are then constructed before the derivd class constructor beforre the derived class cnstructor is executed.

mtlb h ki phlw virtual vale constuctor execute honge base class k usk bd no-virtual constructr ka number aayga
if multiple h tjen jis rder me vo h usme execute hnge
*/