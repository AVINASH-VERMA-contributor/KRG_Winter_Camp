package LibraryManagement;
import java.util.*;
class book
        {
            String Name;
            int id;
            String Genre;
            boolean flag;
            public void getbook(String name,int id,String genre)
            {
                this.Name=name;
                this.id=id;
                this.Genre=genre;
                flag=true;
            }
            public void show()
            {
                System.out.println("Name:"+Name);
                System.out.println("bookid"+id);
                System.out.println("Genre:"+Genre);
                System.out.println("Availablity:"+flag);
            }
        }
class management{
    book b[]=new book[20];
    static int numofbooks=0;
    HashMap<Integer,Integer> status=new HashMap<>();

    void addbook(String name,int id,String genre)
    {
        b[numofbooks]=new book();
        b[numofbooks].getbook(name,id,genre);
        numofbooks++;
    }
    void showbook()
    {
        for(int i=0;i<=numofbooks;i++)
        {
            b[i].show();
            System.out.println();
        }
    }
    public void borrow(String name,int studentid)
    {
        for(int i=0;i<=numofbooks;i++)
        {
            if(b[i].Name==name)
            {
                if(b[i].flag==true)
                {
                    System.out.println("Book is available to borrow");
                    status.put(b[i].id,studentid);
                    b[i].flag=false;
                    break;
                }
                else {
                    System.out.println("Book already borrowed");
                }
            }
            else {
                System.out.println("there is no book with the given id");
            }
        }
    }
    public void  Return(String name,int studentid)
    {
        for(int i=0;i<=numofbooks;i++)
        {
            if(b[i].Name==name)
            {
                if(b[i].flag==true)
                {
                    System.out.println("this book is not borrowed yet");


                }
                else {
                    System.out.println("Book returned susessfullly");
                    b[i].flag=true;
                    status.remove(b[i].id);

                }
            }
            else {
                System.out.println("there is no book with the given id");
            }
        }
    }
    void showStatus()
    {
       for(Integer i:status.keySet())
       {
           System.out.println("book id:"+i +",borrowed by:"+status.get(i));

       }
    }
        }
public class Main {
}
