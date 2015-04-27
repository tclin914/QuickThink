#include <stdio.h>
#include <stdlib.h>


int main()
{
    timer();
    motd();
    init_game();

    while(!beggar()) {
        level_menu();
        int level = get_int();  
        int tmp = play(level - 1);
        set_money(tmp);
        
        if (rich_man()) { //money >= 1000000
            get_flag();
            exit(0);
        }
    }

    puts("Oops, You lose all money.");

    return 0;
}
