import QtQuick 2.4

Item {
    width: 400
    height: 400
    property alias buttonColor: button.color
    property alias displayColor: display.color
    property alias displayText: display.text

    Rectangle {
        id: button
        color: "#ff3232"
        radius: 100
        anchors.fill: parent

        Text {
            id: display
            x: 171
            y: 169
            width: 337
            height: 232
            color: "#ffffff"
            text: qsTr("Blablabla")
            elide: Text.ElideLeft
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            horizontalAlignment: Text.AlignHCenter
            lineHeight: 0.9
            font.pixelSize: 40
        }
    }
}
