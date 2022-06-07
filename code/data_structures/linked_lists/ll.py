class Linked_list:
    def __init__(self):
        class Node:
            def __init__(self,value):
                self.value=value
                self.next=None
        self.Node=Node
        self.head=self.tail=Node(None)
    def is_empty(self):
        return self.head.value==None 
    def add_to_tail(self,value):
        self.tail.next=self.Node(value)
        self.tail=self.tail.next

    def add_to_head(self,value):
        n=self.Node(value)
        n.next=self.head
        self.head=n
    def remove_head(self):
        if self.is_empty():
            return False
        n=self.head.next()
        del self.head
        self.head=n
        return True 
    def remove_tail(self):
        if self.is_empty():
            return False 
        n=self.head
        while(n.next.next != None):
            n=n.next
        del n.next
        n.next=None 
    
    def printer(self):
        if self.is_empty():
            return []
        n=self.head
        m=[]
        while(n.next!=None):
            m.append(n.value)
            n=n.next
        m.append(n.value)
        return m 


linked_list=Linked_list()
for i in range(10):
    linked_list.add_to_head(i)
for i in range(10):
    linked_list.add_to_tail(i)
print(linked_list.printer())
