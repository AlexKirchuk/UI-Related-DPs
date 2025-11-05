package org.example.mvvm_example;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class MVVMTest {
    @Test
    void testMVVMBindingWorks() {
        User user = new User("Start");
        UserViewModel viewModel = new UserViewModel(user);
        viewModel.updateName("Updated");
        assertEquals("Updated", user.getName());
        assertEquals("Updated", viewModel.nameProperty().get());
    }
}
