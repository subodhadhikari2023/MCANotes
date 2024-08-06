package com.BitsUniSage.Sorting;

import java.util.Arrays;

public class InsertionSorting {
    public static void main(String[] args) {
//        int[] arr = {7,9,5,1,10,-3};
        int[] arr = {4, 1, 5, 0};

        sort(arr);
        System.out.println(Arrays.toString(arr));

    }

    public static void sort(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int j = i;
            while (j > 0 && (arr[j] < arr[j - 1])) {
                swap(arr[j], arr[j - 1]);
                j--;
            }

        }
    }

    public static void swap(int first, int second) {
        int temp = first;
        first = second;
        second = temp;
    }

}

/*
int temp = arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
*/