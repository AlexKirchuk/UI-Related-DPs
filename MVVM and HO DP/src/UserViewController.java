package org.example.mvvm_example;

import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

public class UserViewController {
    @FXML private Label nameLabel;
    @FXML private TextField nameField;

    private UserViewModel viewModel;

    @FXML
    public void initialize() {
        User user = new User(" ");
        viewModel = new UserViewModel(user);
        nameLabel.textProperty().bind(viewModel.nameProperty());
        nameField.textProperty().bindBidirectional(viewModel.nameProperty());
    }

    @FXML
    private void onUpdate() {
        viewModel.updateName(nameField.getText());
    }
}
