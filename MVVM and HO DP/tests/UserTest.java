package org.example.mvvm_example;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class UserTest {
    @Test
    void testUserGetSetName() {
        User user = new User("John");
        assertEquals("John", user.getName());
        user.setName("Jane");
        assertEquals("Jane", user.getName());
    }
}