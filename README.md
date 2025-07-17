# 🌐 HTTP Methods Explained

This document provides a quick overview of HTTP request methods, their behavior, and real-world use cases.

---

## ✅ What is Idempotent?

**Idempotent** means sending the same request multiple times has the **same effect** as sending it once.

- ✅ **Idempotent:** GET, PUT, DELETE, HEAD, OPTIONS
- ❌ **Not Idempotent:** POST

---

## 🔁 HTTP Methods Summary

| Method   | Safe | Idempotent | Description                            | Example Endpoint      |
|----------|------|------------|----------------------------------------|------------------------|
| GET      | ✅    | ✅          | Retrieve data                          | `/users/123`          |
| HEAD     | ✅    | ✅          | Retrieve headers only                  | `/files/manual.pdf`   |
| POST     | ❌    | ❌          | Create new resource                    | `/users`              |
| PUT      | ❌    | ✅          | Replace existing resource              | `/users/123`          |
| PATCH    | ❌    | ✅ (ideally)| Partially update a resource            | `/users/123`          |
| DELETE   | ❌    | ✅          | Delete a resource                      | `/posts/789`          |
| OPTIONS  | ✅    | ✅          | Describe available communication options | `/products`        |
| TRACE    | ✅    | ✅          | Debugging (echo the request)           | `/debug/trace`        |
| CONNECT  | ✅    | ✅          | Create a tunnel (e.g., HTTPS proxy)    | `CONNECT example.com` |

---

## 🧠 Real-World Examples

- **GET** → Fetch user profile  
  `GET /users/123`

- **HEAD** → Check if file exists  
  `HEAD /files/manual.pdf`

- **POST** → Register a new user  
  `POST /users` with JSON body

- **PUT** → Replace user data  
  `PUT /users/123` with full data

- **PATCH** → Update email  
  `PATCH /users/123` with partial data

- **DELETE** → Remove a post  
  `DELETE /posts/789`

- **OPTIONS** → Used in CORS preflight requests  
  `OPTIONS /products`

- **TRACE** → Echo back the request for debugging

- **CONNECT** → Used by browser to establish HTTPS tunnel through proxy

---

## 📌 Notes

- **Safe methods** do not change server state: GET, HEAD, OPTIONS, TRACE
- **Use POST** for creating new resources.
- **Use PUT/PATCH** for updates, and DELETE for deletions.

---

Happy API Building! 🚀
