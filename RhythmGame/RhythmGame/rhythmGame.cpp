#include "common.h"

struct number
{
	bool success;
	int num;	
};
bool isSuccess(int number)
{
	bool success=false;
	switch(number)
	 {
		case 1: if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
				success = true;
				
				break;
		case 2: if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
				success = true;
				
				break;
		case 3: if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
				success = true;
			
				break;
		case 4: if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
				success = true;
				
				break;
		case 5: if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
				success = true;
				
				break;
		case 6: if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
				success = true;
			
				break;
		case 7: if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
				success = true;
				
				break;
		case 8: if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
				success = true;
				
				break;
		case 9: if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
				success = true;
				break;
	}
	return success;

}

void isSuccesses(number numbers[], int howmany)
{
	printf("howmany: %d",howmany);
	for(int i=0;i<howmany;i++)
	{
		if(isSuccess(numbers[i].num))
			numbers[i].success=true;
		else
		{
			numbers[i].success=false;
			printf("%c",'k');
		}
	}	


}

void rhythmGame()
{
	
	clock_t start;
	
	int i,j,k,l;
	number numbers[9];
	int howmany;
	int temp;

	srand((unsigned int)time(NULL));
	
	while(1)
	{
		howmany = rand() % 4; 
		for(int i=0;i<howmany;i++)
		{
			temp = rand() % 9;
			i = temp/3 ;
			j = temp%3;
			//맞춰야 될 값들
			numbers[i].num = 3*(2-i)+1+j;
		}
	
		//Sleep(2000);
		start = clock();
		while(clock() - start <= 700 )
		{

			isSuccesses(numbers, howmany);			

		}
		break;
	}
	for(i=0;i<howmany;i++)
	{
		printf("%d",numbers[i].success);
	}
			
}

