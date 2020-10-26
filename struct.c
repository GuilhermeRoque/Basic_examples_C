# include <stdio.h>

int main()
{
 
 int i,j;
  
  struct Registro_Notas
    { 
      char user[20];
      float nota[2],media;
    }Alunos[5];


  for (i=0;i<5;i++)
    {
      printf("Aluno:  ");
      scanf("%s", Alunos[i].user); 
      Alunos[i].media =0;
      for(j=0;j<2;j++)
        {
          printf("Aluno %s Nota-Prova %d:  ",Alunos[i].user,j);
          scanf("%f",&Alunos[i].nota[j]);
          Alunos[i].media = Alunos[i].media + Alunos[i].nota[j];
        }
      
      Alunos[i].media = Alunos[i].media/2;
      printf("Media: %f ",Alunos[i].media);
      printf("\n");
    }

}
