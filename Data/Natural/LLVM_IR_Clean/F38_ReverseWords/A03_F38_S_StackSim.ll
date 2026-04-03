@.str = constant [2 x i8] c" \00"
define dso_local void @ReverseWords(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [128 x i8*]
  %4 = alloca i32
  %5 = alloca [256 x i8]
  %6 = alloca i8*
  %7 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %4
  %11 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %12 = load i8*, i8** %2
  %13 = call i8* @strcpy(i8* %11, i8* %12)
  %15 = getelementptr inbounds [256 x i8], [256 x i8]* %5, i64 0, i64 0
  %16 = call i8* @strtok(i8* %15, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %16, i8** %6
  br label %17
17:
  %18 = load i8*, i8** %6
  %19 = icmp ne i8* %18, null
  br i1 %19, label %20, label %27
20:
  %21 = load i8*, i8** %6
  %22 = load i32, i32* %4
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %4
  %24 = sext i32 %22 to i64
  %25 = getelementptr inbounds [128 x i8*], [128 x i8*]* %3, i64 0, i64 %24
  store i8* %21, i8** %25
  %26 = call i8* @strtok(i8* null, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  store i8* %26, i8** %6
  br label %17
27:
  %28 = load i8*, i8** %2
  %29 = getelementptr inbounds i8, i8* %28, i64 0
  store i8 0, i8* %29
  %31 = load i32, i32* %4
  %32 = sub nsw i32 %31, 1
  store i32 %32, i32* %7
  br label %33
33:
  %34 = load i32, i32* %7
  %35 = icmp sge i32 %34, 0
  br i1 %35, label %38, label %36
36:
  br label %54
38:
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %7
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds [128 x i8*], [128 x i8*]* %3, i64 0, i64 %41
  %43 = load i8*, i8** %42
  %44 = call i8* @strcat(i8* %39, i8* %43)
  %45 = load i32, i32* %7
  %46 = icmp sgt i32 %45, 0
  br i1 %46, label %47, label %50
47:
  %48 = load i8*, i8** %2
  %49 = call i8* @strcat(i8* %48, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i64 0, i64 0))
  br label %50
50:
  br label %51
51:
  %52 = load i32, i32* %7
  %53 = add nsw i32 %52, -1
  store i32 %53, i32* %7
  br label %33
54:
  ret void
}
declare i8* @strcpy(i8*, i8*)
declare i8* @strtok(i8*, i8*)
declare i8* @strcat(i8*, i8*)
