#include <stdio.h>
/*int cont(int &year,int &mounth,int &day){
	int nyear,nmounth,nday,n=0;
	while(1){//�ж������ʽ 
	   	printf("��������������գ�\n");
		scanf("%d %d %d",&year,&mounth,&day);
			printf("�����뵱ǰ���ڣ�\n");
		scanf("%d %d %d",&nyear,&nmounth,&nday);
	    if(nyear>=year){
	    	if(nyear==year){
				if(nmounth>=mounth){
					if(mounth==2||nmounth==2){//���·�
					            if(year%400==0||(year%4==0&&year%100!=0)||nyear%400==0||(nyear%4==0&&nyear%100!=0)){//�ж��ǲ�������  ���������29��
					                if(day>29||nday>29){
					                    printf("������������,����������\n");
					                    continue;
					                }
					            }else{
					                if(day>28||nday>28){
					                    printf("������������,����������\n");
					                    continue;
					                }
					            }
					}
				if(nmounth==1||nmounth==3||nmounth==5||nmounth==7||nmounth==8||nmounth==10||nmounth==12&&mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12){
				if(nday>=day&&nday>0&&nday<32){
					printf("�����ʽ��ȷ��\n");
					if(nday==day){
						return 0;
					} 
					break;
				}
				}
				if(nmounth==4||nmounth==6||nmounth==9||nmounth==11&&mounth==4||mounth==6||mounth==9||mounth==11){
				if(nday>=day&&nday>0&&nday<31){
					printf("�����ʽ��ȷ��\n");
					if(nday==day){
						return 0;
					} 
			 	    break;
				}
				}
				else {printf("��ʽ�������������롣\n");	
				continue;}
				}
				else {printf("��ʽ��������������.\n");	
				continue;}
			}
	    
		else {printf("��ʽ��ȷ��\n");	
			continue;}
	    }
		else {printf("��ʽ��������������.\n");	
		continue;}
		}
}*/
judge (int &year,int &mounth,int &day){
	while(1){
		if(mounth==2){//���·�
        if(year%400==0||(year%4==0&&year%100!=0)){//�ж��ǲ�������  ���������29��
		    if(day>29){
			    printf("������������,����������\n");
				scanf("%d %d %d",&year,&mounth,&day);
				continue;
				}
				}else{
					if(day>28){
						printf("������������,����������\n");
						scanf("%d %d %d",&year,&mounth,&day);
						continue;
						}
						    }
							}
						if(mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12){
						if(day<32&&day>0){
							printf("�����ʽ��ȷ��\n");
							
							break;
						}
						}
						if(mounth==4||mounth==6||mounth==9||mounth==11){
						if(day<31&&day>0){
							printf("�����ʽ��ȷ��\n");
							
					 	    break;
						}
						}
		else {printf("������������,����������\n");
		scanf("%d %d %d",&year,&mounth,&day);
		    continue;}
	}
return 0;}
judge1 (int x,int y,int z,int &i){
	if(x<0||(x==0&&y<0)||((x==0&&y==0)&&z<0)){
	 printf("������������,����������\n");	
	}
	else i++;
return 0;}
cont (int y,int y2,int m,int m2,int d,int d2,int &all){
	while(y!=y2){//�겻��ȵ�ʱ��
	    while(m!=13){
	        while(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
	            while(d!=32){
	                d++;
	                all++;
	            }
	            d=1;
	            m++;
	        }
	        while(m==4||m==6||m==9||m==11){
	            while(d!=31){
	                d++;
	                all++;
	            }
	            d=1;
	            m++;
	        }
	        while(m==2){
	            if(y%400==0||(y%4==0&&y%100!=0)){
	                while(d!=30){
	                    d++;
	                    all++;
	                }
	                d=1;
	                m++;
	            }else{
	                while(d!=29){
	                    d++;
	                    all++;
	                }
	                d=1;
	                m++;
	            }
	        }
	    }
	    m=1;
	    y++;
	}//�겻��ȵ�ʱ��
	while(m!=m2){//�²���ȵ�ʱ��
	    while(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
	        while(d!=32){
	            d++;
	            all++;
	        }
	        d=1;
	        m++;
	    }
	    if(m==m2){
	        break;
	    }
	    while(m==4||m==6||m==9||m==11){
	        while(d!=31){
	            d++;
	            all++;
	        }
	        d=1;
	        m++;
	    }
	    if(m==m2){
	        break;
	    }
	    while(m==2){
	        if(y%400==0||(y%4==0&&y%100!=0)){
	            while(d!=30){
	                d++;
	                all++;
	            }
	            d=1;
	            m++;
	        }else{
	            while(d!=29){
	                d++;
	                all++;
	            }
	            d=1;
	            m++;
	        }
	    }
	}//�²���ȵ�ʱ�� OK
	while(d<=d2){//�ղ���ȵ�ʱ��
	    d++;
	    all++;
	}//�ղ���ȵ�ʱ�� OK
return 0;}
int main(){
	int year,mounth,day,n=0,x=0,y=0,z=0,i=0;
	int nyear,nmounth,nday;
	while (1){
	printf("��������������գ�\n");
	scanf("%d %d %d",&year,&mounth,&day);
	judge(year,mounth,day);
	printf("�����뵱ǰ���ڣ�\n");
	scanf("%d %d %d",&nyear,&nmounth,&nday);
	judge(nyear,nmounth,nday);
	x=nyear-year;
	y=nmounth-mounth;
	z=nday-day;
	judge1(x,y,z,i);
	if(i==1)
	break;
	}
	cont(year,nyear,mounth,nmounth,day,nday,n);
	printf("�������������������ĵ�%d�졣\n",n);
	printf("��ú����\n");
	return 0;
}
