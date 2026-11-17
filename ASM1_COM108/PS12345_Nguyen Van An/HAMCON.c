//BÀI 01
#include<stdio.h>
#include <stdlib.h>

void Tong2so()
{
 float a,b,kq;
 printf("\n Nhap a = ");scanf("%f",&a);// Lenh nhap a
 printf("\n Nhap b = ");scanf("%f",&b);
 kq= a+b;
 printf("\n ket qua = %1.f",kq);
}
void Hieu2so()
{
 float a,b,kq;
 printf("\n Nhap a = ");scanf("%f",&a);// Lenh nhap a
 printf("\n Nhap b = ");scanf("%f",&b);
 kq= a-b;
 printf("\n ket qua = %1.f",kq);
}
void Tich2so()
{
 float a,b,kq;
 printf("\n Nhap a = ");scanf("%f",&a);// Lenh nhap a
 printf("\n Nhap b = ");scanf("%f",&b);
 kq= a*b;
 printf("\n ket qua = %1.f",kq);
}
void Thuong2so()
{
 float a,b,kq;
 printf("\n Nhap a = ");scanf("%f",&a);// Lenh nhap a
 printf("\n Nhap b = ");scanf("%f",&b);
 
  if(b==0)
   printf("\n kong hop le!!");
  else
  {
	kq = a / b;
    printf("\n ket qua = %.1f",kq);
  }
}

void main()
{
int chon;
char ans;
 Tiep:
   printf("\n---CHUONG TRINH MAY TINH---\n");
   printf("\n 1. TINH TONG 2 SO!");
   printf("\n 2. TINH HIEU 2 SO!");
   printf("\n 3. TINH TICH 2 SO!");
   printf("\n 4. TINH THUONG 2 SO!");
   printf("\n---------------------------\n");
   
   printf("\n HAY CHON: ");
   scanf(" %d", &chon);
   switch(chon)
        {
            case 1:{
					Tong2so();
            		break;
            		}

           case 2: {
					Hieu2so();
            		break;
            		}

           case 3:{
					Tich2so();
            		break;
            		}

           case 4:{
					Thuong2so();
            		break;
            		}

            default:
                printf("\n Chon khong dung. Vui long chon lai!\n");
        }
 		
		printf("\n Ban co muon tiep tuc khong (Y/N)? ");
        scanf(" %c", &ans);

            if(ans=='Y' || ans=='y')
				goto Tiep;
            else
                {
				 printf("\n Thoat chuong trinh!");
				   exit(1);
                }
}
