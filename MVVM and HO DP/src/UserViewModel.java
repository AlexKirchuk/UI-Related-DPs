package org.example.mvvm_example;

import javafx.beans.property.SimpleStringProperty;
import javafx.beans.property.StringProperty;

public class UserViewModel {
    private final User user;
    private final StringProperty name = new SimpleStringProperty();

    public UserViewModel(User user) {
        this.user = user;
        name.set(user.getName());
    }

    public StringProperty nameProperty() {
        return name;
    }

    public void updateName(String newName) {
        if (newName == null || newName.trim().isEmpty()) {
            System.out.println("Error: name cannot be empty!");
            return;
        }
        user.setName(newName);
        name.set(newName);
        System.out.println("Name updated: " + user.getName());
    }
}
