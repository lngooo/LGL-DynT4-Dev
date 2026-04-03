@mNFY = internal constant [256 x i8] c"\00\01\01\02\01\02\02\03\01\02\02\03\02\03\03\04\01\02\02\03\02\03\03\04\02\03\03\04\03\04\04\05\01\02\02\03\02\03\03\04\02\03\03\04\03\04\04\05\02\03\03\04\03\04\04\05\03\04\04\05\04\05\05\06\01\02\02\03\02\03\03\04\02\03\03\04\03\04\04\05\02\03\03\04\03\04\04\05\03\04\04\05\04\05\05\06\02\03\03\04\03\04\04\05\03\04\04\05\04\05\05\06\03\04\04\05\04\05\05\06\04\05\05\06\05\06\06\07\01\02\02\03\02\03\03\04\02\03\03\04\03\04\04\05\02\03\03\04\03\04\04\05\03\04\04\05\04\05\05\06\02\03\03\04\03\04\04\05\03\04\04\05\04\05\05\06\03\04\04\05\04\05\05\06\04\05\05\06\05\06\06\07\02\03\03\04\03\04\04\05\03\04\04\05\04\05\05\06\03\04\04\05\04\05\05\06\04\05\05\06\05\06\06\07\03\04\04\05\04\05\05\06\04\05\05\06\05\06\06\07\04\05\05\06\05\06\06\07\05\06\06\07\06\07\07\08"
@.str = constant [3 x i8] c"%d\00"
define dso_local i32 @KCY(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i8*
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %10 = load i32, i32* %3
  %11 = load i32, i32* %4
  %12 = xor i32 %10, %11
  store i32 %12, i32* %5
  store i8* %14, i8** %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = icmp slt i32 %18, 4
  br i1 %19, label %22, label %20
20:
  br label %37
22:
  %23 = load i8*, i8** %6
  %24 = load i32, i32* %8
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = zext i8 %27 to i64
  %29 = getelementptr inbounds [256 x i8], [256 x i8]* @mNFY, i64 0, i64 %28
  %30 = load i8, i8* %29
  %31 = zext i8 %30 to i32
  %32 = load i32, i32* %7
  %33 = add nsw i32 %32, %31
  store i32 %33, i32* %7
  br label %34
34:
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %8
  br label %17
37:
  %38 = load i32, i32* %7
  ret i32 %38
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 3
  br i1 %9, label %10, label %11
10:
  store i32 0, i32* %3
  br label %30
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i64 @strtoul(i8* %15, i8** null, i32 10)
  %17 = trunc i64 %16 to i32
  store i32 %17, i32* %6
  %19 = load i8**, i8*** %5
  %20 = getelementptr inbounds i8*, i8** %19, i64 2
  %21 = load i8*, i8** %20
  %22 = call i64 @strtoul(i8* %21, i8** null, i32 10)
  %23 = trunc i64 %22 to i32
  store i32 %23, i32* %7
  %24 = load i32, i32* %6
  %25 = load i32, i32* %7
  %26 = call i32 @KCY(i32 %24, i32 %25)
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i32 %26)
  store i32 0, i32* %3
  br label %30
30:
  %31 = load i32, i32* %3
  ret i32 %31
}
declare i64 @strtoul(i8*, i8**, i32)
declare i32 @printf(i8*, ...)
