var firebaseConfig = {
    apiKey: "AIzaSyCD0LdG3iTnH-Lk1lFEnMEzLXsA6ykkI50",
  authDomain: "todo-dba22.firebaseapp.com",
  databaseURL: "https://todo-dba22-default-rtdb.europe-west1.firebasedatabase.app",
  projectId: "todo-dba22",
  storageBucket: "todo-dba22.appspot.com",
  messagingSenderId: "822288177900",
  appId: "1:822288177900:web:cbea7c44ec13360a8563c9",
  measurementId: "G-5GCM98G47M"
};

firebase.initializeApp(firebaseConfig);
firebase.analytics();
var db = firebase.firestore();