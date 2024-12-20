import datetime

def greet_user():
    current_time = datetime.datetime.now()
    current_hour = current_time.hour

    if 5 <= current_hour < 12:
        greeting = "Good morning"
    elif 12 <= current_hour < 18:
        greeting = "Good afternoon"
    else:
        greeting = "Good evening"

    return greeting

if __name__ == "__main__":
    greeting = greet_user()
    print(greeting)
    