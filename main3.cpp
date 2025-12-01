#include<iostream>
using namespace std;
#include<cstring>

#include "queue.h"

int main(int argc, char **argv){
   int i, j;
   int ID, qt;
   string menu;
   Queue food;

    for(i=1;i<argc;i++) 
    {
       if(strcmp(argv[i],"x")==0) 
       {
       // pop the order (menu and quantity)
         if(!food.empty())
         {
          int order = food.front();
          food.dequeue();

            if (!food.empty())
            {
                int quantity = food.front();
                food.dequeue();
                     switch (order)
                      {
                      case 1:
                        menu = "Ramen";

                        break;
                      case 2:
                        menu = "Somtum";

                        break;
                      case 3:
                        menu = "Fried Chicken";
                        break;

                      default:
                        menu = "No food, please try again";
                        break;
                    }
                cout << "Popping menu " << menu << " qty " << quantity << endl;
            }
         }
         else
         {
            cout << "Queue is empty, cannot be pop." << endl;
         }
        }
        else
      {
        //when the user is ordering
        if (i + 1 < argc)
        {
          ID = atoi(argv[i]);
          qt = atoi(argv[i+1]);

          food.enqueue(ID);
          food.enqueue(qt);

          i++; //skip the next argument since we already got the quantity
        }
        else
        {
          cout << "Missing quantity for the menu " << argv[i] << endl;
        }
      }
    }

    //print the rest of the order
    cout << endl << "Remaining orders:" << endl;

    while (!food.empty())
  {
    int order = food.front();
    food.dequeue();

     switch (order)
    {
    case 1:
      menu = "Ramen";

      break;
    case 2:
      menu = "Somtum";

      break;
    case 3:
      menu = "Fried Chicken";
      break;

    default:
      menu = "No food, please try again";
      break;
   }

    int quantity = 0;
    if (!food.empty())
    {
      quantity = food.front();
      food.dequeue();
    }
    cout << menu << " x " << quantity << endl;
  }
                  
   

   return 0;
}
