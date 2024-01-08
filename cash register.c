#include <stdio.h>
int main()
{
char i1[20]= {"keasari"}, i2[20]= {"Idly"}, i3[20]= {"Poori"}, i4[20]= {"Vadai"}, i5[20]= {"parota"},i6[20]= {"Dosa"},i7[20]={"Veg Briyani"},i8[20]={"Meals"},i9[20]={"Pongal"};
int price[9]= {50,15,20,15,15,20,50,60,35},itemnumber,ItemQuantity,total=0,tax=0,moneyPaid=0;
printf("***************MENU***************\n");
printf(" 1 %s \t\t %d\n",i1,price[0]);
printf(" 2 %s \t\t %d\n",i2,price[1]);
printf(" 3 %s \t\t %d\n",i3,price[2]);
printf(" 4 %s \t\t %d\n",i4,price[3]);
printf(" 5 %s \t\t %d\n",i5,price[4]);
printf(" 6 %s \t %d\n",i6,price[5]);
printf(" 7 %s \t %d\n",i7,price[6]);
printf(" 8 %s \t %d\n",i8,price[7]);
printf(" 9 %s \t %d\n",i9,price[8]);
printf("**********************************\n\n");
printf("Enter Item Number (or -1 to Exit): "),scanf("%d",&itemnumber);
while (itemnumber>=1 && itemnumber <=9)
{
if (itemnumber==1)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
else if (itemnumber==2)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
else if (itemnumber==3)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
else if (itemnumber==4)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
else if (itemnumber==5)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
else if (itemnumber==6)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
else if (itemnumber==7)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
if (itemnumber==8)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
else if (itemnumber==9)
{
printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
total=total+ItemQuantity*price[itemnumber-1];
}
printf("\nEnter Item Number (or -1 to Exit): ");
scanf("%d",&itemnumber);
}
tax=total*10/100;
total+=tax;
printf("\nGST : %d\n",tax);
printf("Total: %d\n",total);

ReEnter:
printf("\nEnter Money Paid by customer: "),scanf("%d",&moneyPaid);
printf("\n");
if(moneyPaid==total)
{
printf("\n************Payment Complete************\n");
}
else if(moneyPaid<total)
{
printf("\nEntered Amount is Less than Total plz Re-Enter");
goto ReEnter;
}
else if(moneyPaid>total)
{
int rupees[10] = {500,200, 100, 50, 20, 10, 5, 2, 1};
int i, amount, quantity;

printf("\n******************Change******************\n");
amount=moneyPaid-total;
for(i=0; i<10; i++)
{
quantity = amount / rupees[i];
if (quantity>0)
{
printf("[%2d] \t", rupees[i] );
printf("------> %2d Notes/Coins\n", quantity);
}
amount = amount%rupees[i];
}
printf("\n************Payment Completed************\n");
}
return 0;
}
