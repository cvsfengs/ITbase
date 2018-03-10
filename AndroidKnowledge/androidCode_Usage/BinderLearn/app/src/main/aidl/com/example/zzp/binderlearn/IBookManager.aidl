// IBookManager.aidl
package com.example.zzp.binderlearn;

// Declare any non-default types here with import statements
import com.example.zzp.binderlearn.Book;
interface IBookManager {
    List<Book> getBookList();
    void addBook(in Book book);
}