


l=[i for i in range(11)]             #list comprehension


print("list made:",l)                           #printing the list


n_list=l.copy()                    #duplicating the list l
print("duplicated the list ",n_list)




print("sliced list :",l[2:6])           #list slicing


l[0]=11                                  #changing  the value of  first element
print("new list after item change",l)

l.insert(1, 15)                                             #inserting element in list 
print("list after inserting element 15 at index 1:",l)        


l.remove(15)                                        #deleting  specific element from list 
print("list after removing element 15 :",l)             



ele=l.pop()                         #default pops out last element
print("list after pop :",l) 

del l[0]                          #  deleting 1st element
print("list after deleting 1st element :",l)   


l.clear()                       #clearing the list
print("list after clearing the list:",l)







