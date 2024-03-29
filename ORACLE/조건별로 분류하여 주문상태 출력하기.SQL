SELECT 
ORDER_ID
,PRODUCT_ID
,TO_CHAR(OUT_DATE,'YYYY-MM-DD')
,CASE WHEN TO_CHAR(OUT_DATE,'YYYYMMDD') <= '20220501'
      THEN '출고완료'
      ELSE DECODE(OUT_DATE,NULL,'출고미정','출고대기')
      END
FROM FOOD_ORDER
ORDER BY ORDER_ID ASC;
