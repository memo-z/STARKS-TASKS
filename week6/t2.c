# include <stdio.h>
int main(){
	typedef struct {
		int hr;
		int min;
		int sc;
	}time;
	time start, stop;
	printf("enter the start time");
	scanf("%d %d %d",&start.hr,&start.min,&start.sc);
	printf("enter the stop time");
	scanf("%d %d %d",&stop.hr,&stop.min,&stop.sc);
	
	int diff(time start , time stop){
		int days=0;
		int hr = stop.hr-start.hr;
		int min = stop.min-start.min;
		int sc=stop.sc-start.sc;
		
		if (hr<0){
			printf("how come u started after u stopped ? ydk well i dont too so go to a therapist or smth");
			return 0;
			
		}
		
		while(hr>=24){
			days++;
			hr-=24;
		}
		
		while(min>=60){
			hr++;
			min-=60;
		}
		
		while(sc>=60){
			min++;
			sc-=60;
			
		}
		
		while(sc<0){
			min--;
			sc+=60;
		}
		
		while(min<0){
			hr--;
			hr-=60;
			
		}
		
		
			printf("the time diffrence is %d days & %d : %d : %d",days,hr,min,sc);
			

		
		
	}
	
	
	diff(start , stop);
	
	
	return 0;
}