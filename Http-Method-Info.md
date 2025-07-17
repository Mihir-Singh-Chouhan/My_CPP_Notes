### ✅ **1. GET**

* **Purpose:** Retrieve data from the server.
* **Safe:** Yes (does not modify data)
* **Idempotent:** Yes
* **Body allowed:** ❌ (no request body; parameters go in the URL as query string)

**Example Use Case:** Fetching a user profile or list of products.

```http
GET /users/123
```

---

### ✅ **2. HEAD**

* **Purpose:** Same as GET but only retrieves headers, not the body.
* **Safe:** Yes
* **Idempotent:** Yes
* **Body allowed:** ❌

**Example Use Case:** Checking if a resource exists or caching info (without downloading the content).

```http
HEAD /file.pdf
```

---

### ✅ **3. POST**

* **Purpose:** Submit data to the server to create a new resource.
* **Safe:** ❌
* **Idempotent:** ❌
* **Body allowed:** ✅ (usually JSON, form data, etc.)

**Example Use Case:** Submitting a new form, creating a new blog post.

```http
POST /users
{
  "name": "Alice",
  "email": "alice@example.com"
}
```

---

### ✅ **4. PUT**

* **Purpose:** Replace an entire resource with the given data.
* **Safe:** ❌
* **Idempotent:** ✅
* **Body allowed:** ✅

**Example Use Case:** Updating the whole user profile.

```http
PUT /users/123
{
  "name": "Alice",
  "email": "alice@example.com"
}
```

---

### ✅ **5. PATCH**

* **Purpose:** Partially update a resource.
* **Safe:** ❌
* **Idempotent:** ✅ (ideally)
* **Body allowed:** ✅

**Example Use Case:** Changing just the user's email.

```http
PATCH /users/123
{
  "email": "alice@newdomain.com"
}
```

---

### ✅ **6. DELETE**

* **Purpose:** Remove a resource.
* **Safe:** ❌
* **Idempotent:** ✅
* **Body allowed:** ✅ (technically allowed but rarely used)

**Example Use Case:** Deleting a user.

```http
DELETE /users/123
```

---

### ✅ **7. OPTIONS**

* **Purpose:** Describe the communication options for the target resource (CORS, allowed methods).
* **Safe:** Yes
* **Idempotent:** Yes
* **Body allowed:** ❌ (usually not used)

**Example Use Case:** Used by browsers before making CORS requests to check what methods are supported.

```http
OPTIONS /users
```

---

### 🔁 **8. TRACE** *(less commonly used)*

* **Purpose:** Echoes back the received request, mainly for debugging.
* **Safe:** Yes
* **Idempotent:** Yes
* **Security Risk:** Can expose sensitive info; often disabled on servers.

---

### 🔁 **9. CONNECT** *(used in proxies)*

* **Purpose:** Establish a tunnel to the server, mostly for HTTPS connections via a proxy.
* **Example:** Used when your browser connects to an HTTPS website via a proxy.

```http
CONNECT www.example.com:443 HTTP/1.1
```

---

## 🔑 Summary Table

| Method  | Safe | Idempotent  | Used For                        |
| ------- | ---- | ----------- | ------------------------------- |
| GET     | ✅    | ✅           | Read/retrieve data              |
| HEAD    | ✅    | ✅           | Check resource headers          |
| POST    | ❌    | ❌           | Create resource                 |
| PUT     | ❌    | ✅           | Replace resource                |
| PATCH   | ❌    | ✅ (ideally) | Partial update                  |
| DELETE  | ❌    | ✅           | Remove resource                 |
| OPTIONS | ✅    | ✅           | Discover allowed methods        |
| TRACE   | ✅    | ✅           | Debugging (echo request)        |
| CONNECT | ✅    | ✅           | Establish tunnel (proxy, HTTPS) |

---
