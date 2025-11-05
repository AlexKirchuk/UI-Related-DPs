package org.example.mvvm_example;

import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

class UserViewModelTest {
    @Test
    void testUpdateName() {
        User user = new User("Old Name");
        UserViewModel viewModel = new UserViewModel(user);

        viewModel.updateName("New Name");
        assertEquals("New Name", user.getName());
        assertEquals("New Name", viewModel.nameProperty().get());
    }

    @Test
    void testEmptyNameNotAllowed() {
        User user = new User("Original");
        UserViewModel viewModel = new UserViewModel(user);

        viewModel.updateName("");
        assertEquals("Original", user.getName()); // имя не изменилось
    }
}
