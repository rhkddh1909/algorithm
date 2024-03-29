SELECT 
PRODUCT_CODE
,SUM(PROD.PRICE * OFFSALE.SALES_AMOUNT) AS SALES
FROM 
PRODUCT PROD
,OFFLINE_SALE OFFSALE
WHERE PROD.PRODUCT_ID = OFFSALE.PRODUCT_ID
GROUP BY PRODUCT_CODE
ORDER BY SALES DESC, PRODUCT_CODE ASC;
