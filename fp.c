#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void shop();
void main()
{

struct info{
char urname[15];
char pswd[15];
};
struct info in[5];
int i=0,ch,j=0,ch1,k=0;
char pss[15];
while(1)
{
printf(".........................ADARSH CART................................\n");
printf(".........................  WELCOME  ................................\n");
printf("1.SIGN UP\n2.LOGIN\n3.EXIT");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("ENTER USERNAME\n");
scanf("%s",in[i++].urname);
printf("ENTER PASSWORD\n");
scanf("%s",in[j++].pswd);
k++;
break;
case 2:for(k=0;k<i;k++)
{
printf("%d%s\t",k,in[k].urname);
}
scanf("%d",&ch1);
printf("ENTER YOUR PASSWORD");
scanf("%s",pss);
if(strcmp(pss,in[ch1].pswd)==0)
{
shop();
}
else
printf("SORRY! WRONG PASSWORD");
break;
case 3:exit(0);
default :printf("INVALID ENTRY");
break;
}
}
}
void shop()

{ int count,ch,ch1,i=0,j;
float net,amt=0;
int index[20];
struct {
float price;
}
 item [30];
item[0].price=0;
item[1].price=20;
item[2].price=15;
item[3].price=25;
item[4].price=26;
item[5].price=30;
item[6].price=650;
item[7].price=750;
item[8].price=800;
item[9].price=120;
item[10].price=16;
item[11].price=8;
item[12].price=9;
item[13].price=15;
item[14].price=6;
item[15].price=20;
item[16].price=25;
item[17].price=15;
item[18].price=15;
item[19].price=10;
item[20].price=8;

while(ch)
{
printf(".........................ADARSH CART................................\n");
printf("CATEGORIES:\n1.CLOTHES\n2.ELECTRONIC GADGETS\n3.FOOTWEAR\n4.BOOKS\n");
printf("5.CONFIRM ORDER\n6.logout\n");
scanf("%d",&ch);
switch(ch)
{

case 1:printf("1.SHIRT[20$]\n2.T-SHIRT[15$]\n3.JEANS[25$]\n4.PANT[26$]\n5.CARGO PANTS[30$]");
scanf("%d",&index[i++]);
break;
case 2:printf("6.HP NOTEBOOK[650$]\n7.SAMSUNG GALAXY S8[750$]\n8.APPLE I10[800$]\n9.TABLET PC IBALL[120$]\n10.PHILIPS TRIMMER[16$]");
scanf("%d",&index[i++]);
break;
case 3:printf("16.PUMA SPORTS SHOE[25$]\n17.SREELEATHERS LEATHER SHOE[15$]\n18.CAMPUS CANVAS SHOE[15$]\n19.LOTTO SANDAL[10$]\n20.SLIPPERS[8$]");
scanf("%d",&index[i++]);
break;
case 4:printf("11.FUNDAMENTALS OF DATA STRUCTURES(BY HOROWITZ & SAHANI)[8$]\n12.IMMORTALS OF MELUHA NOVEL[9$]\n13.THE ALCHEMIST[15$]\n14.REVOLUTION 2020[6$]\n15.HORSTMANN CORE JAVA[20$]");
 scanf("%d",&index[i++]);
break;
case 5:for(j=0;j<i;j++)
{
amt=item[index[j]].price+amt;
}
printf("Amount=%f\n",amt);
net=amt/10+amt;
printf("GST IS 10percent\nTHE NET BILL IS %f\n",net);
break;

break;
case 6:printf("ARE YOU SURE WANT TO LOGOUT\n");
printf("1.YES\n2.NO");
scanf("%d",&ch1);
if(ch1==1)
exit(0);
default:printf("INVALID ENTRY");
break;

}
}
}






