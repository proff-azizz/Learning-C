#include <stdio.h>
void takeDamage(int *health)
{
      *health=*health-5;
    if(*health <= 0)
    {
        *health = 0;
    }
}
void heal(int *health)
{
    
    if (*health <100)
    {
        *health=*health + 20;
    }
    
   if (*health > 100)
    {
        *health =100;
        
    }
}
int main(void)
{
    int health;
    printf("Enter Your Health :\n");
    if(scanf("%d",&health)!=1)
    {
    
        printf("Invalid Input\n TRY AGAIN \n");
        return 1;
    }

   
    if(health == 0)
    {
        printf("You are Dead\n");
        return 0;
    
    }
    takeDamage(&health);
    printf("Health after Damage: %d\n", health);
    if(health == 0)
    {
        printf("You are Dead\n");
    
    }

    else {
    heal(&health);
    printf("Health after using healing magic : %d",health);
    }
    
return 0;
    
}

