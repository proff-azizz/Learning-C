#include <stdio.h>
void takeDamage(int *health)
{
    *health=*health-5;
}
int main(void)
{
    int health=100;
    takeDamage(&health);
    printf("Health : %d\n",health);
    return 0;

}
