package assignment3;

public class q1 {
    public static void main(String[] args) {
        int arr[]={1,1,0,0,0,1,1,0,1,1};
        segregate(arr);
        display(arr);
    }


    private static void display(int[] arr) {
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }


    public static void segregate(int arr[]){
        int i=0,j=0;

        while(j<arr.length){
            if(arr[j]==0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j++;
            }
            else{
                j++;
            }
        }

    }
}
