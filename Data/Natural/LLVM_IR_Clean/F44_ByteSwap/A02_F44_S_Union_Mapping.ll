%union.anon = type { i32 }
define dso_local i32 @ByteSwap(i32 %0) {
  %2 = alloca i32
  %3 = alloca %union.anon
  %4 = alloca %union.anon
  store i32 %0, i32* %2
  %7 = load i32, i32* %2
  store i32 %7, i32* %8
  %10 = getelementptr inbounds [4 x i8], [4 x i8]* %9, i64 0, i64 3
  %11 = load i8, i8* %10
  %13 = getelementptr inbounds [4 x i8], [4 x i8]* %12, i64 0, i64 0
  store i8 %11, i8* %13
  %15 = getelementptr inbounds [4 x i8], [4 x i8]* %14, i64 0, i64 2
  %16 = load i8, i8* %15
  %18 = getelementptr inbounds [4 x i8], [4 x i8]* %17, i64 0, i64 1
  store i8 %16, i8* %18
  %20 = getelementptr inbounds [4 x i8], [4 x i8]* %19, i64 0, i64 1
  %21 = load i8, i8* %20
  %23 = getelementptr inbounds [4 x i8], [4 x i8]* %22, i64 0, i64 2
  store i8 %21, i8* %23
  %25 = getelementptr inbounds [4 x i8], [4 x i8]* %24, i64 0, i64 0
  %26 = load i8, i8* %25
  %28 = getelementptr inbounds [4 x i8], [4 x i8]* %27, i64 0, i64 3
  store i8 %26, i8* %28
  %30 = load i32, i32* %29
  ret i32 %30
}
