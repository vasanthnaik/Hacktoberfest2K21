/*
Problem Link: https://leetcode.com/problems/last-stone-weight/

* Approach: max_heap
* Time Complexity: O(N), where N is no of element in the array
* Space Complexity: O(N), for creating PriorityQueue of size N
* */

import java.util.*;

public class LastRemainStone {

    public static int checkLastStone(int[] arr) {
        // if of empty array
        if(arr == null) return 0;

        int n = arr.length;
        //creating max heap
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());

        //adding element to the maxHeap
        for(int item: arr) {
            maxHeap.add(item);
        }

        while(maxHeap.size() > 1) {
            int item1 = maxHeap.poll();
            int item2 = maxHeap.poll();

            //if largest two elements are not same
            //then their absolute difference to heap
            if(item1 != item2) {
                maxHeap.add(Math.abs(item1-item2));
            }
            //if both are same then continue
        }

        //check the for the last element and return if exist else return 0
        return ((maxHeap.size() == 1) ? maxHeap.poll() : 0);

    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter No. of element: ");
        int n = scan.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements: ");
        for(int i = 0; i < n; i++){
            arr[i] = scan.nextInt();
        }

        //calling and print the result of the checkLastStone() method
        System.out.println(checkLastStone(arr));
    }
}
