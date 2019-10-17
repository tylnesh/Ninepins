import QtQuick 2.4

Item {
    width: 400
    height: 400

    Rectangle {
        id: rectangle
        border.color: "#ff00ff"
        gradient: Gradient {
            GradientStop {
                position: 0
                color: "#5ff600"
            }

            GradientStop {
                position: 1
                color: "#0016c9"
            }
        }
        anchors.fill: parent
    }
}

/*##^## Designer {
    D{i:1;anchors_height:200;anchors_width:200;anchors_x:53;anchors_y:62}
}
 ##^##*/
