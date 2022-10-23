import java.util.*;
public class DiagonalDifference {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int lTOr =0,rTOl=0;
        int arr[][]=new int[size][size];
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(i==j)
                lTOr= lTOr+arr[i][j];
            }
        }
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(i==size-j-1)
                rTOl = rTOl+arr[i][j];
            }
        }
        System.out.println(Math.abs(lTOr - rTOl));
    }
}
