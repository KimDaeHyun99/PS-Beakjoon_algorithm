#include <stdio.h>

int main(){
  int n=0;
  int w=0;
  int L=0;

  int p=0;
  
  scanf("%d %d %d", &n, &w, &L);

  int input[n];
  int que[w];
  int que_timer[w];
  int que_sum=0;

  int last=0;
  int time=0;
  
  
  for (int i=0;i<n;i++)
    scanf("%d", &input[i]);

  for (int i=0;i<w;i++)
    {
      que[i]=0;
      que_timer[i]=0;
    }

for (int i=0;i<n;i++)
{
  if (p>=w)
    p=0;

      time++;
          for (int j=0;j<w;j++)
      {
        if (que_timer[j])
          que_timer[j]--;
        if (que_timer[j]==0)
        {
          que_sum -= que[j];
          que[j]=0;
        } 
      } 
  
  if ((que_sum+input[i])>L)
  {
   
    do
    {
      time++;
      for (int j=0;j<w;j++)
      {
        if (que_timer[j])
          que_timer[j]--;
        if (que_timer[j]==0)
        {
          que_sum -= que[j];
          que[j]=0;
        } 
      } 
      
    } while((que_sum+input[i])>L);
  }
  
  que[p]=input[i];
  que_timer[p]=w;
  que_sum += input[i];

  p++;
    if (i+1==n)
  {
    for (int j=0;j<w;j++)
    {
       if (last < que_timer[j]) 
         last = que_timer[j];
    }
  time += last;
  printf("%d", time);
  }
}
}
