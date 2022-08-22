#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a;
float TFe, TCe, PFe, P;
int y = 1;
do
{
cout<<"\t\t\tLever Rule (Iron - Cementite Diagram)\n";
cout<<"\nEnter the value of carbon percentage:\n";
cin>>a;
if(a > (float) 0.025 && a < (float) 0.8)
{
TFe = ((6.67 - a)/(6.67-0.025))*100;
TCe = 100 - TFe;
PFe = ((0.8 - a)/(0.8 - 0.025))*100;
P = 100 - PFe;
cout<<"\t\t\t The information for the given input\n";
cout<<"\nIt is a Hypoeutectoid Steel.";
cout<<"\nThe Total Ferrite content is: "<<TFe<<"%";
cout<<"\nThe Cementite content is: "<<TCe<<"%";
cout<<"\nThe Proeutectoid Ferrite is: "<<PFe<<"%";
cout<<"\nThe Pearlite content is: "<<P<<"%";
}
else if (a == (float) 0.8)
{
TFe = ((6.67 - a)/(6.67-0.025))*100;
TCe = 100 - TFe;
PFe = ((0.8 - a)/(0.8 - 0.025))*100;
P = 100 - PFe;
cout<<"\t\t\t The information for the given input\n";
cout<<"\nIt is a Eutectoid Steel.";
cout<<"\nThe Total Ferrite content is: "<<TFe<<"%";
cout<<"\nThe Cementite content is: "<<TCe<<"%";
cout<<"\nThe Pearlite content is: "<<P<<"%";
}
else if(a > (float) 0.8 && a <= (float) 2.14)
{
TFe = ((6.67 - a)/(6.67-0.025))*100;
TCe = 100 - TFe;
PFe = ((a - 0.8)/(6.67 - 0.8))*100;
P = 100 - PFe;
cout<<"\t\t\t The information for the given input\n";
cout<<"\nIt is a Hypereutectoid Steel.";
cout<<"\nThe Total Ferrite content is: "<<TFe<<"%";
cout<<"\nThe Cementite content is: "<<TCe<<"%";
cout<<"\nThe Proeutectoid Cementite is: "<<PFe<<"%";
cout<<"\nThe Pearlite content is: "<<P<<"%";
}
else if (a > (float) 2.14)
{
cout<<"\t\t\t The information for the given input\n";
cout<<"\nIt is a Cast Iron according to Iron - Cementite Diagram.";
}
else
{
cout<<"\t\t\t The information for the given input\n";
cout<<"\nConsidered as Interstitial Free (IF) Steel.";
}
cout<<"\nDo you want to continue (Yes = 1 and Exit = 0):\n";
cin>>y;
clrscr();
}while (y==1);
getch();
}