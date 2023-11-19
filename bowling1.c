#include <stdio.h>

int main(void)
{
	int frame[10][2]={0};
	int frame_score[10] = {0};
	int total= 0 ;
	int strike = 0, spare = 0;
	
	
	for(int i = 0; i < 10; ++i){
		////////////////////////////////1///////////////////////////////////
		printf("%d frame score first cast : ",i+1);
		scanf("%d", &frame[i][0]);
		frame_score[i] += frame[i][0];
		
		//if strike (cast 1)
		if(strike != 0 || spare != 0){ 
			if(strike == 2){
				//frame_score[i-1] += frame[i][0];
				//total += frame[i][0];
				strike -= 1;
			}
			else if(strike == 1){
				//total += frame[i][0];
				strike -= 1;
				printf("%d frame score : %d\n", i-1, total);
			}
			else if(spare == 1){
				total += frame[i][0];
				spare = 0;
				printf("%d frame score : %d\n", i, total);
			}	
		}
		

		//When strike
		if(frame[i][0] == 10 && i < 9){ 
			if(strike ==0)
				strike = 2;
				
			total += frame_score[i];
			printf("Strike!\n");
			continue;
		}
		
		//////////////////////////////////////2////////////////////////////////
		printf("%d frame score second cast : ", i+1);
		scanf("%d", &frame[i][1]);
		frame_score[i] += frame[i][1];
		
		//cast2 strike
		if(strike != 0 ){
			frame_score[i-1] += frame_score[i];
			total += frame_score[i-1];
			strike = 0;
			printf("%d frame score : %d\n", i, total);
		}

		//when spare
		if(frame[i][0]+frame[i][1] == 10 && i < 9){
			printf("Spare!\n");
			spare = 1;
			total += frame_score[i];
			continue;
		}



		total += frame_score[i];
		//no spare and no strike
		if(frame_score[i] < 10) 
			printf("%d frame score : %d\n", i+1, total);
			
		
		// 10frame spare or strike
		if(frame[i][0]+frame[i][1] >= 10 && i == 9){  
			printf("%d frame score third cast : ", i+1);
			scanf("%d", &frame[i][2]);
		}
	
	}
	
	
	
	return 0;
}
