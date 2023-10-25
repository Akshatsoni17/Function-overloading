#include<iostream>
using namespace std;
int sum(int n1,int n2)
{
    return n1+n2;
}
double sum(double n1,int n2)
{
    return n1+n2;
}
double sum(double n1,double n2)
{
	return n1+n2;
}
double sum(int n1,double n2)
{
	return n1+n2;
}
int sum(int n1,int n2,int n3)
{
	return n1+n2+n3;
}
double sum(int n1,int n2,double n3)
{
	return n1+n2+n3;
}
double sum(int n1,double n2,int n3)
{
	return n1+n2+n3;
}
double sum(double n1,int n2,int n3)
{
	return n1+n2+n3;
}
double sum(double n1,double n2,int n3)
{
	return n1+n2+n3;
}
double sum(double n1,int n2,double n3)
{
	return n1+n2+n3;
}
double sum(int n1,double n2,double n3)
{
	return n1+n2+n3;
}
double sum(double n1,double n2,double n3)
{
		return n1+n2+n3;
}

main()
{
    cout<<sum(10,20)<<endl;
    cout<<sum(10.50,20)<<endl;
    cout<<sum(15.43,12.2)<<endl;
    cout<<sum(9,23.5)<<endl;
    cout<<sum(1,2,3)<<endl;
    cout<<sum(1,2,3.50)<<endl;
    cout<<sum(1,2.50,3)<<endl;
    cout<<sum(1.50,2,3)<<endl;
    cout<<sum(1.20,2.30,5)<<endl;
    cout<<sum(2.20,7,6.90)<<endl;
    cout<<sum(2,7.50,6.90)<<endl;
    cout<<sum(1.10,2.20,3.30);

}
