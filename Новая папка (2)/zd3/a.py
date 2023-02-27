import re

def depersonalize(data):
    # Remove emails
    data = re.sub(r'\S+@\S+', '', data)
    
    # Remove addresses
    data = re.sub(r'\d{1,3}(-\w+)? \w+\.\d+ \w+\.\d+', '', data)
    
    # Replace numerical data with dummy values
    data = re.sub(r'\d+', 'XXX', data)
    
    return data

# Example usage
data = """Почта Адрес
ccfpt.sqjjye@vc