@.str = constant [5 x i8] c"%c%d\00"
@.str.1 = constant [2 x i8] c"\0A\00"
define dso_local void @StrCompress(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %2
  %9 = load i8*, i8** %2
  %10 = call i64 @strlen(i8* %9)
  %11 = trunc i64 %10 to i32
  store i32 %11, i32* %3
  store i32 0, i32* %4
  store i32 1, i32* %5
  store i32 0, i32* %6
  %15 = load i32, i32* %3
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 1, i32* %7
  br label %73
18:
  br label %19
19:
  %20 = load i32, i32* %6
  %21 = icmp ne i32 %20, -1
  br i1 %21, label %22, label %72
22:
  %23 = load i32, i32* %6
  switch i32 %23, label %71 [
    i32 0, label %24
    i32 1, label %30
    i32 2, label %31
    i32 3, label %58
    i32 4, label %69
  ]
24:
  %25 = load i32, i32* %4
  %26 = load i32, i32* %3
  %27 = icmp slt i32 %25, %26
  %28 = zext i1 %27 to i64
  %29 = select i1 %27, i32 1, i32 4
  store i32 %29, i32* %6
  br label %71
30:
  store i32 1, i32* %5
  store i32 2, i32* %6
  br label %71
31:
  %32 = load i32, i32* %4
  %33 = add nsw i32 %32, 1
  %34 = load i32, i32* %3
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %36, label %56
36:
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %4
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = load i8*, i8** %2
  %44 = load i32, i32* %4
  %45 = add nsw i32 %44, 1
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %43, i64 %46
  %48 = load i8, i8* %47
  %49 = sext i8 %48 to i32
  %50 = icmp eq i32 %42, %49
  br i1 %50, label %51, label %56
51:
  %52 = load i32, i32* %5
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %5
  %54 = load i32, i32* %4
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %4
  br label %57
56:
  store i32 3, i32* %6
  br label %57
57:
  br label %71
58:
  %59 = load i8*, i8** %2
  %60 = load i32, i32* %4
  %61 = sext i32 %60 to i64
  %62 = getelementptr inbounds i8, i8* %59, i64 %61
  %63 = load i8, i8* %62
  %64 = sext i8 %63 to i32
  %65 = load i32, i32* %5
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %64, i32 %65)
  %67 = load i32, i32* %4
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %4
  store i32 0, i32* %6
  br label %71
69:
  %70 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i64 0, i64 0))
  store i32 -1, i32* %6
  br label %71
71:
  br label %19
72:
  store i32 0, i32* %7
  br label %73
73:
  %78 = load i32, i32* %7
  switch i32 %78, label %80 [
    i32 0, label %79
    i32 1, label %79
  ]
79:
  ret void
80:
  unreachable
}
declare i64 @strlen(i8*)
declare i32 @printf(i8*, ...)
