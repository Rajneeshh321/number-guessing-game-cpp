#include <iostream> 
int main()
{
    int low = 1;
    int high = 100;
    int guess;
    char response;

    int tries = 0;

    const int maxTries=7;  // limit to 7 guesses

    std::cout <<  "******** AI GUESSES YOUR CHOSEN NUMBER ********\n\n";

    std:: cout << "Think of a number between 1 and 100 . I will try to guess it in " << maxTries << " Tries \n";
    std:: cout << "Enter:\n  'h' if my guess is too high\n  'l' if it's too low\n  'c' if it's correct\n\n";

    while (tries < maxTries){

        guess = (low + high)/2;
        tries++;

        std:: cout << " Try " << tries << ": is your number " << guess <<"? (h/l/c): ";
        std:: cin >> response;

        if(response == 'h'){
            high=guess-1;
        }
        else if(response == 'l'){
            low = guess+1;
        }
        else if (response == 'c'){
           std:: cout << "\n Yay! I guessed your number in " << tries << " tries!\n";
            return 0;
        }

        else {
           std:: cout << " Invalid input. Enter only h/l/c. \n";
            tries--; // Don’t count invalid attempts
        }

          if (low > high) {
            std::cout << "\n Wait! That doesn't make sense. Did you change your number?\n";
            return 1;
        }

    }

       std:: cout << "\n I couldn't guess your number in " << maxTries << " attempts. You win!\n";
        return 0;



    std::cout << "\n\n***********************************************";


}