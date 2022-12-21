package assignment3;

public class q3 {
    public static void main(String[] args) {
        int arr[]={1,5,6,12,53,21};

        int smallest=arr[0];
        int largest=arr[0];

        for(int i=0;i<arr.length;i++){
            smallest=Math.min(arr[i],smallest);
            largest=Math.max(arr[i],largest);
        }
        System.out.println(smallest);
        System.out.println(largest);

    }
}
