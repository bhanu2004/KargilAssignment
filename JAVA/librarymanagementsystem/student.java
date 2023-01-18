/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package librarymanagementsystem;

import java.util.Scanner;

// Class
public class student {

	String studentName;
	String regNum;

	book borrowedBooks[] = new book[3];
	public int booksCount = 0;

	Scanner input = new Scanner(System.in);

	// Constructor
	public student()
	{
		// Print statement
		System.out.println("Enter Student Name:");

		// This keywords refers to current instance
		this.studentName = input.nextLine();

		// Print statement
		System.out.println("Enter Registration Number:");
		this.regNum = input.nextLine();
	}
}
