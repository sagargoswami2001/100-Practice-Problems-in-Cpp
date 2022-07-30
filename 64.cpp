// C++ Program to Inverse a 2x2 or 3x3 Matrix
#include<iostream>
#include <iomanip> //for setting float precision
//using namespace std;
using std::cout;
using std::cin;
using std::setprecision;

int i=0,j=0,N=3;
float matOrderSelect, determinant, inverse2[2][2]={0}, tempmatrix[2][2];

class Matrix
{
  private:
    /* data */
  public:
    float **enterMatrix(float matOrderSelect)
    {
          int i=matOrderSelect, j=matOrderSelect;
          float **mat1= new float*[N];
          cout<<"\t\t | Matrix Inversion of "<<i<<"X"<<j<<" | \t\t\n";
          cout << "Enter Elements of "<<i<<"X"<<j<<" Matrix: \n";

          for(i=0; i < matOrderSelect; i++)
          {
              mat1[i]= new float[N];
              for(j=0; j < matOrderSelect; j++ )
              {
                cout <<"Matrix["<<i<<"]["<<j<<"]:";
                cin>>mat1[i][j];
              }
          }
          return mat1;
    }
    void printMatrix(float **mat1, float matOrderSelect)
    {
      cout<<"\v";
      cout<<"Given "<<matOrderSelect<<"X"<<matOrderSelect<<" Matrix: ";

      for(i=0; i < matOrderSelect; i++)
      {
        cout<<"\n";
        for(j=0; j < matOrderSelect; j++ )
          {
            cout <<mat1[i][j];
            if((j+1)!=matOrderSelect)
            {
              cout<<", ";
            }
            else
            {
              cout<<" ";
            }
          }
        cout<<"";
      }
    }

};

class Matrix2D : public Matrix
{
  private:

  public:

    float **InverseOf2(float **givenMatrix)
    {
        tempmatrix[0][0]=givenMatrix[0][0];
        givenMatrix[0][0]=givenMatrix[1][1];
        givenMatrix[1][1]=tempmatrix[0][0];

        givenMatrix[0][1]=givenMatrix[0][1]-(2*givenMatrix[0][1]);
        givenMatrix[1][0]=givenMatrix[1][0]-(2*givenMatrix[1][0]);

        cout<<'\n'<<"Inverse matrix: \n";
        for(i=0;i<matOrderSelect;i++)
        {
          cout<<'\n';
          for(j=0;j<matOrderSelect;j++)
          {
            inverse2[i][j]= (givenMatrix[i][j]/determinant);
            cout<<inverse2[i][j]<<setprecision(2);

            if((j+1)!=matOrderSelect)
            {
              cout<<", ";
            }
            else
            {
              cout<<" ";
            }
          }
        }
        return 0;
    }

    int Determinant2D(int matorderselect, float **givenMatrix)
    {
      if(matOrderSelect==2)
      {
        return (givenMatrix[0][0] * givenMatrix[1][1])-(givenMatrix[0][1] * givenMatrix[1][0]);
      }
      return 0;
    }
};

class Matrix3D : public Matrix
{
  private:

  public:
    int Determinant3D(int matorderselect, float **givenMatrix)
    {
      if(matOrderSelect==3)
      {
        return (givenMatrix[0][0] * (givenMatrix[1][1] * givenMatrix[2][2] - givenMatrix[2][1] * givenMatrix[1][2])
                -givenMatrix[0][1] * (givenMatrix[1][0] * givenMatrix[2][2] - givenMatrix[2][0] * givenMatrix[1][2])
                +givenMatrix[0][2] * (givenMatrix[1][0] * givenMatrix[2][1] - givenMatrix[2][0] * givenMatrix[1][1]));
      }
      return 0;
    }

    float **inverse3D(int matorderselect, float **givenMatrix, int determinant)
    {
      float Cofactors[3][3] = {0};
      float Adjoint[3][3] = {0};
      float inverse3X3[3][3] = {0};

      int i, j = 0;

      Cofactors[0][0] = givenMatrix[1][1]*givenMatrix[2][2]-givenMatrix[1][2]*givenMatrix[2][1];
      Cofactors[0][1] = -1*(givenMatrix[1][0]*givenMatrix[2][2]-givenMatrix[1][2]*givenMatrix[2][0]);
      Cofactors[0][2] = givenMatrix[1][0]*givenMatrix[2][1]-givenMatrix[1][1]*givenMatrix[2][0];
      Cofactors[1][0] = -1*(givenMatrix[0][1]*givenMatrix[2][2]-givenMatrix[2][1]*givenMatrix[0][2]);
      Cofactors[1][1] = givenMatrix[0][0]*givenMatrix[2][2]-givenMatrix[0][2]*givenMatrix[2][0];
      Cofactors[1][2] = -1*(givenMatrix[0][0]*givenMatrix[2][1]-givenMatrix[0][1]*givenMatrix[2][0]);
      Cofactors[2][0] = givenMatrix[0][1]*givenMatrix[1][2]-givenMatrix[0][2]*givenMatrix[1][1];
      Cofactors[2][1] = -1*(givenMatrix[0][0]*givenMatrix[1][2]-givenMatrix[0][2]*givenMatrix[1][0]);
      Cofactors[2][2] = givenMatrix[0][0]*givenMatrix[1][1]-givenMatrix[0][1]*givenMatrix[1][0];

      cout << "==============\n Cofactors \n==============\n";
      for(i=0;i<matOrderSelect;i++)
      {
        for(j=0;j<matOrderSelect;j++)
        {
          cout <<"Cofactor["<<i<<"]" << "[" <<j<< "] = "<< Cofactors[i][j]<<" ";
          Adjoint[i][j] = Cofactors[i][j];
        }
          printf("\n");
      }

      Adjoint[0][1] = Cofactors[1][0];
      Adjoint[0][2] = Cofactors[2][0];
      Adjoint[1][2] = Cofactors[2][1];
      Adjoint[1][0] = Cofactors[0][1];
      Adjoint[2][0] = Cofactors[0][2];
      Adjoint[2][1] = Cofactors[1][2];

      cout << "==============\n Adjoint \n==============\n";
      for(i=0;i<matOrderSelect;i++)
      {
        for(j=0;j<matOrderSelect;j++)
        {
          cout <<"Adjoint["<<i<<"]" << "[" <<j<< "] = "<< Adjoint[i][j]<<" ";
        }
          printf("\n");
      }

      for(i=0;i<matOrderSelect;i++)
      {
        for(j=0;j<matOrderSelect;j++)
        {
          inverse3X3[i][j] = (Adjoint[i][j])/determinant;
        }
      }

      cout << "==============\n Inverse \n==============\n";
      for(i=0;i<matOrderSelect;i++)
      {
        for(j=0;j<matOrderSelect;j++)
        {
          cout <<"Inverse["<<i<<"]" << "[" <<j<< "] = "<< inverse3X3[i][j] <<setprecision(2)<<" ";
        }
          printf("\n");
      }
      return 0;
    }
};

int main()
{
  float **givenMatrix;
  //Matrix one;
  Matrix2D Two;
  Matrix3D Three;

  choice:
  cout<< "\n\n==============Select Matrix Order!==================\n\n";
  cout<< "\nPress 1 to enter a custom order of Square Matrix.(Doesn't work yet!) \nPress 2 for 2x2 Matrix inversion.\nPress 3 for 3x3 Matrix Inversion.\nPress 4 to Exit\n";
  cout<< "\nEnter Your Choice: ";
  cin>>matOrderSelect;

  if(matOrderSelect!=1 && matOrderSelect!=2 && matOrderSelect!=3 && matOrderSelect!=4)
  {
    cout<<"Invalid Choice! Select one of the available Option.";
    goto choice;
  }
  else if(matOrderSelect == 1)
  {
    cout<<"This option is currently not available!";
  }
  else if (matOrderSelect == 2)
  {
    int choice1 = -1,tempchoice;
    givenMatrix = Two.enterMatrix(matOrderSelect);

    choice1:
    cout<< "\n\n==============Operation to be done!==================\n\n";
    cout<< "\nPress 1 to Print the given Matrix.\nPress 2 to find 2x2 Matrix determinant.\nPress 3 to find 2x2 Matrix inverse\n\n";
    cout<< "\nEnter Your Choice: ";
    cin>>choice1;

    switch(choice1)
    {
      case 1:
        Two.printMatrix(givenMatrix, matOrderSelect);
        cout<< "\n\nPress 1 For Operation Menu\nPress 2 For Main Menu\nPress 3 For Quit\n";
        cout<< "\nEnter Your Choice: ";
        cin>>tempchoice;
        {
              if(tempchoice==1)
              {
                goto choice1;
              }
              else if(tempchoice==2)
              {
                goto choice;
              }
              else if(tempchoice == 3)
              {
                cout<<"Thank-You for Using This Program. Exiting program now.3.2.1...";
                exit(0);
              }
              else
              {
                cout<<"Invalid Choice! Select one of the available Option. Exiting program!";
                exit(1);
              }
          }

        break;

      case 2:
        determinant = Two.Determinant2D(matOrderSelect, givenMatrix);
        cout<<"\nDeterminant: "<<determinant;
        cout<<"\n\nPress 1 For Operation Menu\nPress 2 For Main Menu\nPress 3 For Quit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>tempchoice;
        {
              if(tempchoice==1)
              {
                goto choice1;
              }
              else if(tempchoice==2)
              {
                goto choice;
              }
              else if(tempchoice == 3)
              {
                cout<<"Thank-You for Using This Program. Exiting program now.3.2.1...";
                exit(0);
              }
              else
              {
                cout<<"Invalid Choice! Select one of the available Option. Exiting program!";
                exit(1);
              }
        }
        break;

      case 3:
        Two.printMatrix(givenMatrix, matOrderSelect);
        cout<<"\n";

        determinant = Two.Determinant2D(matOrderSelect, givenMatrix);
        cout<<"\nDeterminant: "<<determinant;

        if(determinant==0)
        {
          cout<<"\nDeterminant is 0, Matrix's inverse doesn't Exit!\n";
        }
        else
        {
          cout<<"\nDeterminant is not 0, Matrix Inverse Exist\n";
          Two.InverseOf2(givenMatrix);
        }

        cout<<"\n\nPress 1 For Operation Menu\nPress 2 For Main Menu\nPress 3 For Quit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>tempchoice;
        {
              if(tempchoice==1)
              {
                goto choice1;
              }
              else if(tempchoice==2)
              {
                goto choice;
              }
              else if(tempchoice == 3)
              {
                cout<<"Thank-You for Using This Program. Exiting program now.3.2.1...";
                exit(0);
              }
              else
              {
                cout<<"Invalid Choice! Select one of the available Option. Exiting program!";
                exit(1);
              }
          }
        break;

      default:
      cout<<"Invalid Choice! Select one of the available Option.";
      goto choice1;

    }
  }

  else if(matOrderSelect==3)
  {
    int choice2 = -1,tempchoice;
    givenMatrix = Three.enterMatrix(matOrderSelect);

    choice2:
    cout<< "\n\n==============Operation to be done!==================\n\n";
    cout<< "\nPress 1 to Print the given Matrix.\nPress 2 to find 3X3 Matrix determinant.\nPress 3 to find 3X3 Matrix inverse\n\n";
    cout<< "\nEnter Your Choice: ";
    cin>>choice2;

    switch(choice2)
    {
      case 1:
        Three.printMatrix(givenMatrix, matOrderSelect);
        cout<<"\n\nPress 1 For Operation Menu\nPress 2 For Main Menu\nPress 3 For Quit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>tempchoice;
        {
              if(tempchoice==1)
              {
                goto choice2;
              }
              else if(tempchoice==2)
              {
                goto choice;
              }
              else if(tempchoice == 3)
              {
                cout<<"Thank-You for Using This Program. Exiting program now.3.2.1...";
                exit(0);
              }
              else
              {
                cout<<"Invalid Choice! Select one of the available Option. Exiting program!";
                exit(1);
              }
          }

        break;

      case 2:
        determinant = Three.Determinant3D(matOrderSelect, givenMatrix);
        cout<<"\nDeterminant: "<<determinant;
        cout<<"\n\nPress 1 For Operation Menu\nPress 2 For Main Menu\nPress 3 For Quit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>tempchoice;
        {
              if(tempchoice==1)
              {
                goto choice2;
              }
              else if(tempchoice==2)
              {
                goto choice;
              }
              else if(tempchoice == 3)
              {
                cout<<"Thank-You for Using This Program. Exiting program now.3.2.1...";
                exit(0);
              }
              else
              {
                cout<<"Invalid Choice! Select one of the available Option. Exiting program!";
                exit(1);
              }
        }
        break;

      case 3:
        Three.printMatrix(givenMatrix, matOrderSelect);
        cout<<"\n";

        determinant = Three.Determinant3D(matOrderSelect, givenMatrix);
        cout<<"\nDeterminant: "<<determinant;

        if(determinant==0)
        {
          cout<<"\nDeterminant is 0, Matrix's inverse doesn't Exit!\n";
        }
        else
        {
          cout<<"\nDeterminant is not 0, Matrix Inverse Exist\n";
          Three.inverse3D(matOrderSelect, givenMatrix, determinant);
        }

        cout<<"\n\nPress 1 For Operation Menu\nPress 2 For Main Menu\nPress 3 For Quit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>tempchoice;
        {
              if(tempchoice==1)
              {
                goto choice2;
              }
              else if(tempchoice==2)
              {
                goto choice;
              }
              else if(tempchoice == 3)
              {
                cout<<"Thank-You for Using This Program. Exiting program now.3.2.1...";
                exit(0);
              }
              else
              {
                cout<<"Invalid Choice! Select one of the available Option. Exiting program!";
                exit(1);
              }
          }
        break;

      default:
      cout<<"Invalid Choice! Select one of the available Option.";
      goto choice2;
    }
  }
  else if(matOrderSelect==4)
  {
    char Confirmation;
    cout<< "Are You Sure You want to exit the Program?(Y = Exit/ Any Key except Y = Return to main menu)";
    cin >> Confirmation;

    if(Confirmation == 'Y' || Confirmation == 'y')
    {
      cout<<"Thank-You for Using This Program. Exiting program now.3.2.1...";
      exit(0);
    }
    else
    {
      goto choice;
    }

  }
  else
  {
    cout<<"Invalid Choice! Select one of the available Option.";
    goto choice;
  }
  return 0;
}
