#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;


int endGameFunction(string * arr){
    int checkEmpty=0;
    //cout<<"Entered endgame function"<<endl;
    if(arr[0]==arr[4] && arr[4]==arr[8] ){
        //cout<<"entered first\n";
        if(arr[0]=="X")return 1;
        else if(arr[0]=="O") return 2;
    }else if(arr[1]==arr[4] && arr[4]==arr[7] ){
        //cout<<"entered second\n";
        if(arr[1]=="X")return 1;
        else if(arr[1]=="O")return 2;
    }else if(arr[2]==arr[5] && arr[5]==arr[8] ){
        //cout<<"entered third \n";
        if(arr[2]=="X")return 1;
        else if(arr[2]=="O")return 2;
    }else if(arr[1]==arr[4] && arr[4]==arr[7] ){
        //cout<<"entered fourth \n";
        if(arr[1]=="X")return 1;
        else if(arr[1]=="O")return 2;
    }else if(arr[0]==arr[3] && arr[3]==arr[6] ){
        //cout<<"entered fifth \n";
        if(arr[0]=="X")return 1;
        else if(arr[0]=="O")return 2;
    }else if(arr[0]==arr[1] && arr[1]==arr[2] ){
        //cout<<"entered sixth \n";
        if(arr[0]=="X")return 1;
        else if(arr[0]=="O")return 2;
    }else if(arr[2]==arr[4] && arr[4]==arr[6] ){
        //cout<<"entered seventh \n";
        if(arr[2]=="X")return 1;
        else if(arr[2]=="O")return 2;
    }else if(arr[6]==arr[7] && arr[7]==arr[8] ){
        //cout<<"entered eighth \n";
        if(arr[6]=="X")return 1;
        else if(arr[6]=="O")return 2;
    }
    //cout<<"entered default \n";

    for(int i=0; i<9; i++){
        if(arr[i]=="")checkEmpty++;
    }

    if(checkEmpty==0)return 3;

    return 0;
}

int belongsToShelf(int * arr, int number){
    int returNable=-1;
    for(int i=0; i<3; i++){
        if(arr[i]==number){
            //cout<<"Found postition\n";
            returNable = i;
            break;
        }
    }
    //cout<<"returNable is "<<returNable<<endl;
    return returNable;
}



int identifyNextShelfPosition(int position, string type){
    int * horizontalOne = new int[3]{0,1,2};
    int * horizontalTwo = new int[3]{3,4,5};
    int * horizontalThree = new int[3]{6,7,8};
    int * verticalOne = new int[3]{0,3,6};
    int * verticalTwo = new int[3]{1,4,7};
    int * verticalThree = new int[3]{2,5,8};
    int * diagonalOne = new int[3]{0,4,8};
    int * diagonalTwo = new int[3]{2,4,6};
    int returnAble = -1;

    if(type=="horizontal"){
        //Identify shelf region & location
        if(belongsToShelf(horizontalOne, position) != -1){
            int location = belongsToShelf(horizontalOne, position);
            if(location==2) returnAble =  horizontalOne[0];
            else returnAble =  horizontalOne[location+1];
        }
        else if(belongsToShelf(horizontalTwo, position) != -1){
            int location = belongsToShelf(horizontalTwo, position);
            if(location==2) returnAble =  horizontalTwo[0];
            else returnAble =  horizontalTwo[location+1];
        }
        else if(belongsToShelf(horizontalThree, position) != -1){
            int location = belongsToShelf(horizontalThree, position);
            if(location==2) returnAble =  horizontalThree[0];
            else returnAble =  horizontalThree[location+1];
        }
    }else if(type=="vertical"){
        //Identify shelf region & location
        if(belongsToShelf(verticalOne, position) != -1){
            int location = belongsToShelf(verticalOne, position);
            if(location==2) returnAble =  verticalOne[0];
            else returnAble =  verticalOne[location+1];
        }
        else if(belongsToShelf(verticalTwo, position) != -1){
            int location = belongsToShelf(verticalTwo, position);
            if(location==2) returnAble =  verticalTwo[0];
            else returnAble =  verticalTwo[location+1];
        }
        else if(belongsToShelf(verticalThree, position) != -1){
            int location = belongsToShelf(verticalThree, position);
            if(location==2) returnAble =  verticalThree[0];
            else returnAble =  verticalThree[location+1];
        }
    }else if(type=="diagonalOne"){
        //Identify shelf region & location
        int location = belongsToShelf(diagonalOne, position);
        if(location==2) returnAble =  diagonalOne[0];
        else returnAble =  diagonalOne[location+1];

    }
    else if(type=="diagonalTwo"){
        //Identify shelf region & location
        int location = belongsToShelf(diagonalTwo, position);
        if(location==2) returnAble =  diagonalTwo[0];
        else returnAble =  diagonalTwo[location+1];

    }

    delete [] horizontalOne;
    delete [] horizontalTwo;
    delete [] horizontalThree;
    delete [] verticalOne;
    delete [] verticalTwo;
    delete [] verticalThree;
    delete [] diagonalOne;
    delete [] diagonalTwo;

    return returnAble;

}

int placementPosition(string *arr, int currentPosition, string checkType, string playerSymbol){
    int playerPositionCount=1;
    int emptyPositionCount=0;
    int oppositionPositionCount=0;
    int emptyPosition = -1;

    int nextPos1 = identifyNextShelfPosition(currentPosition, checkType);
    int nextPos2 = identifyNextShelfPosition(nextPos1, checkType);

    if(arr[nextPos1]==playerSymbol) playerPositionCount++;
    else if(arr[nextPos1]==""){
        emptyPositionCount++;
        emptyPosition = nextPos1;
    }else{
        oppositionPositionCount++;
    }

    if(arr[nextPos2]==playerSymbol) playerPositionCount++;
    else if(arr[nextPos2]==""){
        emptyPositionCount++;
        emptyPosition = nextPos2;
    }else{
        oppositionPositionCount++;
    }

    if(playerPositionCount==2 && emptyPositionCount==1){
        return emptyPosition;
    }

    return -1;


}

int placementPositionAny(string *arr, int currentPosition, string checkType, string playerSymbol){
    int playerPositionCount=1;
    int emptyPositionCount=0;
    int oppositionPositionCount=0;
    int emptyPosition = -1;

    int nextPos1 = identifyNextShelfPosition(currentPosition, checkType);
    int nextPos2 = identifyNextShelfPosition(nextPos1, checkType);

    if(arr[nextPos1]==""){
        emptyPositionCount++;
        emptyPosition = nextPos1;
    }

    if(arr[nextPos2]==""){
        emptyPositionCount++;
        emptyPosition = nextPos2;
    }

    return emptyPosition;


}

bool executeWinStrategy(string * arr){
    int positionToOccupy=-1;

    for(int i=0; i<9; i++){
        if(arr[i]=="O"){
            if(i==4){
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalOne", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalTwo", "O");
                }else{break;}

            }else if(i==0 || i==8){
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalOne", "O");
                }else{break;}


            }else if(i==2 || i==6){
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalTwo", "O");
                }else{break;}

            }else{
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "O");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "O");
                }else{break;}
            }
        }
    }

    if(positionToOccupy==-1) return false;
    else{
        arr[positionToOccupy]="O";
        return true;
    }

}

bool executeCounterAgainstTwoConsecutive(string * arr){
    int positionToOccupy=-1;

    for(int i=0; i<9; i++){
        if(arr[i]=="X"){
            if(i==4){
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalOne", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalTwo", "X");
                }else{break;}

            }else if(i==0 || i==8){
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalOne", "X");
                }else{break;}


            }else if(i==2 || i==6){
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "diagonalTwo", "X");
                }else{break;}

            }else{
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "horizontal", "X");
                }else{break;}
                if(positionToOccupy==-1){
                    positionToOccupy = placementPosition(arr, i, "vertical", "X");
                }else{break;}
            }
        }
    }

    if(positionToOccupy==-1) return false;
    else{
        arr[positionToOccupy]="O";
        return true;
    }

}

bool executeCounterAgainstAny(string *arr){
    int positionToOccupy = -1;
    if(arr[4]==""){
        arr[4]="O";
        return true;
    }else{
        for(int i=0; i<9; i++){
            if(positionToOccupy==-1){
                positionToOccupy = placementPositionAny(arr, i, "horizontal", "O");
            }else{break;}
            if(positionToOccupy==-1){
                positionToOccupy = placementPositionAny(arr, i, "vertical", "O");
            }else{break;}
        }
    }
    if(positionToOccupy!=-1){
        arr[positionToOccupy]="O";
        return true;
    }

    return false;
}

bool executeCounterStrategy(string *arr){
    bool moved = false;
    moved = executeCounterAgainstTwoConsecutive(arr);
    if(!moved){
        moved = executeCounterAgainstAny(arr);
    }

    return moved;
}



bool logicFunction(string *arr){
    bool moveComplete = false;

    moveComplete = executeWinStrategy(arr);

    if(!moveComplete) executeCounterStrategy(arr);

    ///BAD LOGIC
    /*
    cout<<"Entered logic function"<<endl;
    if(arr[0]==""){
        arr[0]="O";
        return false;
    }
    else if(arr[1]==""){
            arr[1]="O";
            return false;
    }
    else if(arr[4]==""){
            arr[4]="O";
            return false;
    }
    else if(arr[3]==""){
            arr[3]="O";
            return false;
    }

    if(arr[2]==""){
            arr[2]="O";
            return false;
    }
    else if(arr[1]==""){
            arr[1]="O";
            return false;
    }
    else if(arr[5]==""){
            arr[5]="O";
            return false;
    }
    else if(arr[4]==""){
            arr[4]="O";
            return false;
    }

    if(arr[4]==""){
            arr[4]="O";
            return false;
    }
    else if(arr[1]==""){
            arr[1]="O";
            return false;
    }
    else if(arr[5]==""){
            arr[5]="O";
            return false;
    }
    else if(arr[3]==""){
            arr[3]="O";
            return false;
    }
    else if(arr[7]==""){
            arr[7]="O";
            return false;
    }

    if(arr[3]==""){
        arr[3]="O";
        return false;
    }
    else if(arr[0]==""){
            arr[0]="O";
            return false;
    }
    else if(arr[4]==""){
            arr[4]="O";
            return false;
    }
    else if(arr[6]==""){
            arr[6]="O";
            return false;
    }

    if(arr[6]==""){
        arr[6]="O";
        return false;
    }
    else if(arr[3]==""){
            arr[3]="O";
            return false;
    }
    else if(arr[4]==""){
            arr[4]="O";
            return false;
    }
    else if(arr[5]==""){
            arr[5]="O";
            return false;
    }

    if(arr[8]==""){
            arr[8]="O";
            return false;
    }
    else if(arr[5]==""){
            arr[5]="O";
            return false;
    }
    else if(arr[4]==""){
            arr[4]="O";
            return false;
    }
    else if(arr[7]==""){
            arr[7]="O";
            return false;
    }


    */





    return false;
}

void inputFunction(string *arr){
    //cout<<"Entered input function"<<endl;
    cout<<"Player One input please\n";
    bool exit=false;

    for(;;){
        int userInput;
        cin>>userInput;
        if(arr[userInput-1]==""){
            arr[userInput-1]="X";
            break;
        }
        else{
            cout<<"Place already occupied. Please choose different place"<<endl;
        }
    }
}

void inputFunction2(string *arr){
    //cout<<"Entered input function"<<endl;
    cout<<"Player Two input please\n";
    bool exit=false;

    for(;;){
        int userInput;
        cin>>userInput;
        if(arr[userInput-1]==""){
            arr[userInput-1]="O";
            break;
        }
        else{
            cout<<"Place already occupied. Please choose different place"<<endl;
        }
    }
}


void displayFunction(string *arr){
    cout<<"Entered display function"<<endl;
    system("CLS");

    for(int i=0; i<9; i++){
        bool endLine=false;
        if(i==3||i==6){
            //cout<<"            "<<endl;
            cout<<"----------"<<endl;
        }
        if(i==2 || i==5 || i==8){
            endLine=true;
            if(arr[i]=="")cout<<i+1;
            else cout<<arr[i];
            cout<<endl;
        }else{
            if(arr[i]=="")cout<<i+1;
            else cout<<arr[i];
            cout<<" | ";
        }

    }

    cout<<endl<<endl<<endl;
    /*
    cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<endl;
    cout<<"---------"<<endl;
     cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<endl;
    cout<<"---------"<<endl;
     cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<endl;
     */
}

void humanVsCPU(){
    string * arr = new string[9]{"","","","","","","","",""};
    int winner=0;
    for(;;){
        bool returnVal=false;
        bool exitCondition=false;

        displayFunction(arr);
        inputFunction(arr);
        //cout<<"winner is: "<<winner<<endl;
        winner=endGameFunction(arr);
        //cout<<"winner is: "<<winner<<endl;
        logicFunction(arr);// exitCondition=logicFunction(arr);
        winner=endGameFunction(arr);
        //cout<<"winner is: "<<winner<<endl;
        if(winner!=0)exitCondition=true;
        displayFunction(arr);
        if(exitCondition){
            if(winner==1)cout<<"\n\nHUMAN player wins the game!\n\n"<<endl;
            else if(winner==2)cout<<"\n\nCOMPUTER wins the game!\n\n"<<endl;
            else cout<<"\n\nIts a DRAW!!!\n\n"<<endl;
            break;
        }
    }
}

void humanVsHuman(){
    string * arr = new string[9]{"","","","","","","","",""};
    int winner=0;
    for(;;){
        bool returnVal=false;
        bool exitCondition=false;

        displayFunction(arr);
        inputFunction(arr);
        //cout<<"winner is: "<<winner<<endl;
        winner=endGameFunction(arr);
        displayFunction(arr);
        //cout<<"winner is: "<<winner<<endl;
        inputFunction2(arr);// exitCondition=logicFunction(arr);
        winner=endGameFunction(arr);
        //cout<<"winner is: "<<winner<<endl;
        if(winner!=0)exitCondition=true;
        displayFunction(arr);
        if(exitCondition){
            if(winner==1)cout<<"\n\nPlayer 1 wins the game!\n\n"<<endl;
            else if(winner==2)cout<<"\n\nPlayer 2 wins the game!\n\n"<<endl;
            else cout<<"\n\nIts a DRAW!!!\n\n"<<endl;
            break;
        }
    }
}

void ticTacToe(){
    cout<<"Select game mode\nPress \n\t1 for Human vs Human"<<endl;
    cout<<"\t2 for Human vs CPU\n";
    int  gameMode;
    cin>>gameMode;

    if(gameMode==1){
        humanVsHuman();
    }else if(gameMode==2){
        humanVsCPU();
    }

}

int main(){
    ticTacToe();
    //driverFunction();

}
