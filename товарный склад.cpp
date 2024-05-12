#include <iostream>
#include "laptop.h"
#include "SoundPlayer.h"
#include "Phone.h"
#include "PersonalComputer.h"


int main()
{
    IElectronics* warehouse[4];

    warehouse[0] = new SoundPlayer(5, 100, 1);
    warehouse[1] = new Phone(60, 6, 20, 0.3);
    warehouse[2] = new PC("rtx 4070ti", "intel core i7 13700kf","Gskill", "water cooling", 32, 12.5);
    warehouse[3] = new Laptop(12, 15.6, 144, "MacOS", 3.7);

    bool open = true;
    while (open)
    {
        cout << "Выберите товар, характеристики которого хотите посмотреть: 1 - музыкальный проигрыватель, 2 - телефон, 3 - персональный компьютер, 4 - ноутбук, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            warehouse[0]->ShowSpec();
            break;

        case 2:
            warehouse[1]->ShowSpec();
            break;

        case 3:
            warehouse[2]->ShowSpec();
            break;

        case 4:
            warehouse[3]->ShowSpec();
            break;
        case 0:
            open = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 4 или 0, чтобы выйти" << endl;
            break;
        }
    }
    delete warehouse[0];
    delete warehouse[1];
    delete warehouse[2];
    delete warehouse[3];

    return 0;
}
