// QUES1: Find issues in below code
// SOL: 1. Put the business logic in service layer 2. multiple API calls in worst case solved by batch processing
@RestController
public class UserController {


    @Autowired
    private UserService userService;


    @GetMapping("/users")
    public List<User> getUsers() {
        List<User> users = userService.getAllUsers(); //get all users from DB
        for (User user : users) {
            user.setOrders(userService.getOrdersByUserId(user.getId())); 
	    //getOrdersByUserId will make an API call
        }
        return users;
    }
}

//QUES2: Which data structure for O(1) lookup and  multi threaded env
//ConcurrentHashMap

//QUES3: Which data structure for O(1) lookup and preserve order 
//LinkedHashMap

//QUES4: Issue in code
//SOL: Throw exception: Operation not supported
List<String> names = Arrays.asList("Alice", "Bob", "Charlie");
names.add("David");
