@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Xr(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %8 = load i32, i32* %4
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %13
10:
  %11 = load i32, i32* %5
  %12 = call i32 @abs(i32 %11)
  store i32 %12, i32* %3
  br label %77
13:
  %14 = load i32, i32* %5
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = call i32 @abs(i32 %17)
  store i32 %18, i32* %3
  br label %77
19:
  %20 = load i32, i32* %4
  %21 = call i32 @abs(i32 %20)
  store i32 %21, i32* %4
  %22 = load i32, i32* %5
  %23 = call i32 @abs(i32 %22)
  store i32 %23, i32* %5
  store i32 0, i32* %6
  br label %25
25:
  %26 = load i32, i32* %4
  %27 = load i32, i32* %5
  %28 = or i32 %26, %27
  %29 = and i32 %28, 1
  %30 = icmp eq i32 %29, 0
  br i1 %30, label %31, label %38
31:
  %32 = load i32, i32* %4
  %33 = ashr i32 %32, 1
  store i32 %33, i32* %4
  %34 = load i32, i32* %5
  %35 = ashr i32 %34, 1
  store i32 %35, i32* %5
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %25
38:
  br label %39
39:
  %40 = load i32, i32* %4
  %41 = and i32 %40, 1
  %42 = icmp eq i32 %41, 0
  br i1 %42, label %43, label %46
43:
  %44 = load i32, i32* %4
  %45 = ashr i32 %44, 1
  store i32 %45, i32* %4
  br label %39
46:
  br label %47
47:
  br label %48
48:
  %49 = load i32, i32* %5
  %50 = and i32 %49, 1
  %51 = icmp eq i32 %50, 0
  br i1 %51, label %52, label %55
52:
  %53 = load i32, i32* %5
  %54 = ashr i32 %53, 1
  store i32 %54, i32* %5
  br label %48
55:
  %56 = load i32, i32* %4
  %57 = load i32, i32* %5
  %58 = icmp sgt i32 %56, %57
  br i1 %58, label %59, label %65
59:
  %61 = load i32, i32* %4
  store i32 %61, i32* %7
  %62 = load i32, i32* %5
  store i32 %62, i32* %4
  %63 = load i32, i32* %7
  store i32 %63, i32* %5
  br label %65
65:
  %66 = load i32, i32* %5
  %67 = load i32, i32* %4
  %68 = sub nsw i32 %66, %67
  store i32 %68, i32* %5
  br label %69
69:
  %70 = load i32, i32* %5
  %71 = icmp ne i32 %70, 0
  br i1 %71, label %47, label %72
72:
  %73 = load i32, i32* %4
  %74 = load i32, i32* %6
  %75 = shl i32 %73, %74
  store i32 %75, i32* %3
  br label %77
77:
  %78 = load i32, i32* %3
  ret i32 %78
}
declare i32 @abs(i32)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @Xr(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
