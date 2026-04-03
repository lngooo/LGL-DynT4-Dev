%union.anon = type { i32 }
define dso_local i32 @bKM(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca %union.anon
  %6 = alloca i8
  store i32 %0, i32* %2
  store i32 7, i32* %3
  %9 = load i32, i32* %3
  %10 = load i32, i32* %3
  %11 = mul nsw i32 %9, %10
  %12 = icmp sgt i32 %11, 40
  br i1 %12, label %13, label %42
13:
  %15 = load i32, i32* %2
  store i32 %15, i32* %16
  %18 = getelementptr inbounds [4 x i8], [4 x i8]* %17, i64 0, i64 0
  %19 = load i8, i8* %18
  store i8 %19, i8* %6
  %21 = getelementptr inbounds [4 x i8], [4 x i8]* %20, i64 0, i64 3
  %22 = load i8, i8* %21
  %24 = getelementptr inbounds [4 x i8], [4 x i8]* %23, i64 0, i64 0
  store i8 %22, i8* %24
  %25 = load i8, i8* %6
  %27 = getelementptr inbounds [4 x i8], [4 x i8]* %26, i64 0, i64 3
  store i8 %25, i8* %27
  %29 = getelementptr inbounds [4 x i8], [4 x i8]* %28, i64 0, i64 1
  %30 = load i8, i8* %29
  store i8 %30, i8* %6
  %32 = getelementptr inbounds [4 x i8], [4 x i8]* %31, i64 0, i64 2
  %33 = load i8, i8* %32
  %35 = getelementptr inbounds [4 x i8], [4 x i8]* %34, i64 0, i64 1
  store i8 %33, i8* %35
  %36 = load i8, i8* %6
  %38 = getelementptr inbounds [4 x i8], [4 x i8]* %37, i64 0, i64 2
  store i8 %36, i8* %38
  %40 = load i32, i32* %39
  store i32 %40, i32* %4
  br label %44
42:
  %43 = load i32, i32* %2
  store i32 %43, i32* %4
  br label %44
44:
  %45 = load i32, i32* %4
  ret i32 %45
}
