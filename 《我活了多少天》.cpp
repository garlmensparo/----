#include <stdio.h>
/*int cont(int &year,int &mounth,int &day){
	int nyear,nmounth,nday,n=0;
	while(1){//判断输入格式 
	   	printf("请输入出生年月日：\n");
		scanf("%d %d %d",&year,&mounth,&day);
			printf("请输入当前日期：\n");
		scanf("%d %d %d",&nyear,&nmounth,&nday);
	    if(nyear>=year){
	    	if(nyear==year){
				if(nmounth>=mounth){
					if(mounth==2||nmounth==2){//二月份
					            if(year%400==0||(year%4==0&&year%100!=0)||nyear%400==0||(nyear%4==0&&nyear%100!=0)){//判断是不是闰年  是闰年就有29号
					                if(day>29||nday>29){
					                    printf("输入日期有误,请重新输入\n");
					                    continue;
					                }
					            }else{
					                if(day>28||nday>28){
					                    printf("输入日期有误,请重新输入\n");
					                    continue;
					                }
					            }
					}
				if(nmounth==1||nmounth==3||nmounth==5||nmounth==7||nmounth==8||nmounth==10||nmounth==12&&mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12){
				if(nday>=day&&nday>0&&nday<32){
					printf("输入格式正确。\n");
					if(nday==day){
						return 0;
					} 
					break;
				}
				}
				if(nmounth==4||nmounth==6||nmounth==9||nmounth==11&&mounth==4||mounth==6||mounth==9||mounth==11){
				if(nday>=day&&nday>0&&nday<31){
					printf("输入格式正确。\n");
					if(nday==day){
						return 0;
					} 
			 	    break;
				}
				}
				else {printf("格式错误，请重新输入。\n");	
				continue;}
				}
				else {printf("格式错误，请重新输入.\n");	
				continue;}
			}
	    
		else {printf("格式正确。\n");	
			continue;}
	    }
		else {printf("格式错误，请重新输入.\n");	
		continue;}
		}
}*/
judge (int &year,int &mounth,int &day){
	while(1){
		if(mounth==2){//二月份
        if(year%400==0||(year%4==0&&year%100!=0)){//判断是不是闰年  是闰年就有29号
		    if(day>29){
			    printf("输入日期有误,请重新输入\n");
				scanf("%d %d %d",&year,&mounth,&day);
				continue;
				}
				}else{
					if(day>28){
						printf("输入日期有误,请重新输入\n");
						scanf("%d %d %d",&year,&mounth,&day);
						continue;
						}
						    }
							}
						if(mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12){
						if(day<32&&day>0){
							printf("输入格式正确。\n");
							
							break;
						}
						}
						if(mounth==4||mounth==6||mounth==9||mounth==11){
						if(day<31&&day>0){
							printf("输入格式正确。\n");
							
					 	    break;
						}
						}
		else {printf("输入日期有误,请重新输入\n");
		scanf("%d %d %d",&year,&mounth,&day);
		    continue;}
	}
return 0;}
judge1 (int x,int y,int z,int &i){
	if(x<0||(x==0&&y<0)||((x==0&&y==0)&&z<0)){
	 printf("输入日期有误,请重新输入\n");	
	}
	else i++;
return 0;}
cont (int y,int y2,int m,int m2,int d,int d2,int &all){
	while(y!=y2){//年不相等的时候
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
	}//年不相等的时候
	while(m!=m2){//月不相等的时候
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
	}//月不相等的时候 OK
	while(d<=d2){//日不相等的时候
	    d++;
	    all++;
	}//日不相等的时候 OK
return 0;}
int main(){
	int year,mounth,day,n=0,x=0,y=0,z=0,i=0;
	int nyear,nmounth,nday;
	while (1){
	printf("请输入出生年月日：\n");
	scanf("%d %d %d",&year,&mounth,&day);
	judge(year,mounth,day);
	printf("请输入当前日期：\n");
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
	printf("今天是你来到这个世界的第%d天。\n",n);
	printf("请好好生活。\n");
	return 0;
}
