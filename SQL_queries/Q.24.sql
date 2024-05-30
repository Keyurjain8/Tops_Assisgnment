use S_J_1;
CREATE TABLE pro (
    pro_id INT,
    pro_name VARCHAR(50),
    pro_price DECIMAL(10, 2),
    pro_com INT
);

-- Step 2: Insert sample data
INSERT INTO pro (pro_id, pro_name, pro_price, pro_com) VALUES
(101, 'Mother Board', 3200.00, 15),
(102, 'Key Board', 450.00, 16),
(103, 'ZIP drive', 250.00, 14),
(104, 'Speaker', 550.00, 16),
(105, 'Monitor', 5000.00, 11),
(106, 'DVD drive', 900.00, 12),
(107, 'CD drive', 800.00, 12),
(108, 'Printer', 2600.00, 13),
(109, 'Refill cartridge', 350.00, 13),
(110, 'Mouse', 250.00, 12);
SELECT pro_com AS company_code, AVG(pro_price) AS average_price
FROM pro
GROUP BY pro_com;


